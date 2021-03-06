/*
 * Copyright (c) 2005 ASPEED Technology Inc.
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of the authors not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  The authors makes no representations
 * about the suitability of this software for any purpose.  It is provided
 * "as is" without express or implied warranty.
 *
 * THE AUTHORS DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL THE AUTHORS BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#include <string.h>
#include <stdlib.h>

#ifdef HAVE_XAA_H
#include "xaa.h"
#endif

#include "ast_pcirename.h"

#include "compat-api.h"

/* Compiler Options */
#define	Accel_2D
/* #define MMIO_2D */
#define HWC
#define AstVideo
/* #define PATCH_ABI_VERSION */

/* Vendor & Device Info */
#ifndef PCI_VENDOR_AST
#define PCI_VENDOR_AST			0x1A03	
#endif	

#ifndef	PCI_CHIP_AST2000
#define PCI_CHIP_AST2000		0x2000		
#endif

#ifndef	PCI_CHIP_AST2100
#define PCI_CHIP_AST2100		0x2010
#endif

#ifndef	PCI_CHIP_AST1180
#define PCI_CHIP_AST1180		0x1180
#endif

typedef enum _CHIP_ID {
    VGALegacy,
    AST2000,
    AST2100,
    AST1100,
    AST2200,
    AST2150,
    AST2300,
    AST1180
} CHIP_ID;

/* AST REC Info */
#define AST_NAME 			"AST"
#define AST_DRIVER_NAME 		"ast"
#define AST_MAJOR_VERSION 		PACKAGE_VERSION_MAJOR
#define AST_MINOR_VERSION 		PACKAGE_VERSION_MINOR
#define AST_PATCH_VERSION		PACKAGE_VERSION_PATCHLEVEL
#define AST_VERSION	\
        ((AST_MAJOR_VERSION << 20) | (AST_MINOR_VERSION << 10) | AST_PATCH_VERSION)

/* Customized Info */
#define DEFAULT_VIDEOMEM_SIZE		0x00800000
#define DEFAULT_MMIO_SIZE		0x00020000
#define DEFAULT_CMDQ_SIZE		0x00100000
#define MIN_CMDQ_SIZE			0x00040000
#define CMD_QUEUE_GUARD_BAND    	0x00000020
#define DEFAULT_HWC_NUM			0x00000002

/* Patch Info */
#define ABI_VIDEODRV_VERSION_PATCH	SET_ABI_VERSION(0, 5)

/* Data Type Definition */
typedef INT32  		LONG;
typedef CARD8   	UCHAR;
typedef CARD16  	USHORT;
typedef CARD32  	ULONG;

/* Data Structure Definition */
typedef struct _ASTRegRec {
	
    UCHAR 	ExtCRTC[0x50];

    UCHAR 	MISC;	
    UCHAR 	SEQ[4];
    UCHAR 	CRTC[25];
    UCHAR 	AR[20];	    
    UCHAR 	GR[9];
    UCHAR	DAC[256][3];
 
    ULONG	GFX[12];
    
} ASTRegRec, *ASTRegPtr;

typedef struct _VIDEOMODE {

    int			ScreenWidth;
    int			ScreenHeight;
    int			bitsPerPixel;
    int			ScreenPitch;
    	
} VIDEOMODE, *PVIDEOMODE;

typedef struct {

    ULONG		ulCMDQSize;
    ULONG		ulCMDQType;
    
    ULONG		ulCMDQOffsetAddr;
    UCHAR       	*pjCMDQVirtualAddr;
    
    UCHAR       	*pjCmdQBasePort;
    UCHAR       	*pjWritePort;    
    UCHAR       	*pjReadPort;     
    UCHAR       	*pjEngStatePort;
          
    ULONG		ulCMDQMask;
    ULONG		ulCurCMDQueueLen;
                
    ULONG		ulWritePointer;
    ULONG		ulReadPointer;
    
    ULONG		ulReadPointer_OK;		/* for Eng_DBGChk */
    
} CMDQINFO, *PCMDQINFO;

typedef struct {

    int			HWC_NUM;
    int			HWC_NUM_Next;

    ULONG		ulHWCOffsetAddr;
    UCHAR       	*pjHWCVirtualAddr;
    
    USHORT		cursortype;
    USHORT		width;
    USHORT   		height;   
    USHORT		offset_x;
    USHORT   		offset_y;
    ULONG		fg;
    ULONG		bg;

    UCHAR               cursorpattern[1024];    
        
} HWCINFO, *PHWCINFO;

typedef struct _ASTPortPrivRec{
    FBLinearPtr     linear;
    FBAreaPtr       fbAreaPtr;
    int             fbSize;
    CARD32          bufAddr[2];

    unsigned char   currentBuf;

    short           drw_x, drw_y, drw_w, drw_h;
    short           src_x, src_y, src_w, src_h;
    int             id;
    short           srcPitch, height;

    INT32           brightness;
    INT32           contrast;
    INT32           saturation;
    INT32           hue;
    
    INT32           gammaR;
    INT32           gammaG;
    INT32           gammaB;

    RegionRec       clip;
    CARD32          colorKey;

    CARD32          videoStatus;
    Time            offTime;
    Time            freeTime;
	
    CARD32          displayMode;

    int             pitch;
    int             offset;
} ASTPortPrivRec, *ASTPortPrivPtr;

typedef struct _ASTRec {
	
    EntityInfoPtr 	pEnt;
#ifndef XSERVER_LIBPCIACCESS	
	pciVideoPtr		PciInfo;
	PCITAG			PciTag;
#else
	struct pci_device       *PciInfo;
#endif

    OptionInfoPtr 	Options;
    DisplayModePtr      ModePtr;		    
    FBLinearPtr 	pCMDQPtr;    
#ifdef HAVE_XAA_H
    XAAInfoRecPtr	AccelInfoPtr;
#endif
    xf86CursorInfoPtr   HWCInfoPtr;
    FBLinearPtr 	pHWCPtr;    

    CloseScreenProcPtr CloseScreen;
    ScreenBlockHandlerProcPtr BlockHandler;

    UCHAR		jChipType;
    UCHAR		jDRAMType;
    ULONG		ulDRAMBusWidth  ;
    ULONG		ulDRAMSize;
    ULONG		ulVRAMSize;
    ULONG		ulVRAMBase;
    ULONG               ulMCLK;
             
    Bool 		noAccel;
    Bool 		noHWC;
    Bool 		MMIO2D;
    int			ENGCaps;
    int			DBGSelect;
    Bool		VGA2Clone;
              	
    ULONG     		FBPhysAddr;		/* Frame buffer physical address     */
    ULONG     		MMIOPhysAddr;     	/* MMIO region physical address      */
    ULONG     		BIOSPhysAddr;     	/* BIOS physical address             */
    
    UCHAR     		*FBVirtualAddr;   	/* Map of frame buffer               */
    UCHAR     		*MMIOVirtualAddr; 	/* Map of MMIO region                */

    unsigned long	FbMapSize;
    unsigned long	MMIOMapSize;
       
    IOADDRESS		IODBase;        	/* Base of PIO memory area */
    IOADDRESS		PIOOffset;
    IOADDRESS		RelocateIO;
    
    VIDEOMODE 		VideoModeInfo;
    ASTRegRec           SavedReg;
    CMDQINFO		CMDQInfo;
    HWCINFO    		HWCInfo;
    ULONG		ulCMDReg;   
    Bool		EnableClip;

    int			clip_left;    
    int			clip_top;
    int			clip_right;    
    int			clip_bottom;    	

    int			mon_h_active;		/* Monitor Info. */
    int			mon_v_active;

#ifdef AstVideo
    XF86VideoAdaptorPtr adaptor;
    Atom        	xvBrightness, xvContrast, xvColorKey, xvHue, xvSaturation;
    Atom		xvGammaRed, xvGammaGreen, xvGammaBlue;
#endif

} ASTRec, *ASTRecPtr, *ASTPtr;

#define ASTPTR(p) ((ASTRecPtr)((p)->driverPrivate))

/* Include Files */
#include "ast_mode.h"
#include "ast_vgatool.h"
#include "ast_2dtool.h"
#include "ast_cursor.h"
