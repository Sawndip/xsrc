/* $XFree86: xc/programs/Xserver/hw/xfree86/drivers/via/via_saa7108.h,v 1.2 2003/08/27 15:16:13 tsi Exp $ */
/*
 * Copyright 1998-2003 VIA Technologies, Inc. All Rights Reserved.
 * Copyright 2001-2003 S3 Graphics, Inc. All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sub license,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * VIA, S3 GRAPHICS, AND/OR ITS SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef _VIA_SAA7108_H_
#define _VIA_SAA7108_H_ 1

static const VIABIOSSAA7108TVMASKTableRec saa7108MaskTable = {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0, 0XFF, 0, 0, 0, 0, 0, 0, 0XFF, 0XFF, 0XFF, 0, 0, 0XFF, 0XFF, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0, 0, 0, 0, 0, 0XFF, 0XFF, 0XFF, 0, 0, 0XFF, 0XFF, 0XFF, 0, 0, 0 },
    0X3F, 0X18, 66, 14, 22
};

static const VIABIOSSAA7108TableRec saa7108Table[] = {
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0X25, 0X76, 0XAF, 0X30, 0X3C, 0X2E, 0X25, 0X11, 0X3F, 0X1F, 0X7C, 0XF0, 0X21, 0, 0, 0, 0, 0, 0X1, 0X26, 0, 0X6, 0X60, 0X28, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X18, 0XFB, 0, 0, 0XC, 0XD, 0X2, 0XEA, 0X87, 0X21, 0XA5, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X81, 0X40, 0X28, 0X28, 0X4, 0X7D, 0X2A, 0X20, 0X2F, 0X94, 0X4F, 0X20, 0X7F, 0X90, 0X90, 0X3B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X5F, 0X4F, 0X4F, 0X83, 0X52, 0X9F, 0X4C, 0XBA, 0, 0X40, 0, 0, 0, 0, 0, 0, 0X15, 0X83, 0XDF, 0, 0, 0XDF, 0X4D, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X20, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0X1F, 0X7F, 0X7F, 0X1F, 0X9A, 0X23, 0X90, 0X69, 0X4D, 0XDF, 0XDF, 0X4D, 0X11, 0XA, 0X4, 0X4B, 0, 0, 0, 0, 0, 0X28, 0X50, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X1F, 0X7F, 0X7F, 0X1F, 0X9A, 0X23, 0X90, 0X69, 0X4D, 0XDF, 0XDF, 0X4D, 0X11, 0XA, 0X4, 0X4B, 0, 0, 0, 0, 0, 0X50, 0XA0, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X1F, 0X7F, 0X7F, 0X1F, 0X9A, 0X23, 0X90, 0X69, 0X4D, 0XDF, 0XDF, 0X4D, 0X11, 0XA, 0X4, 0X4B, 0, 0, 0, 0, 0, 0XA0, 0X40, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X7D, 0XAF, 0X33, 0X35, 0X35, 0, 0X2, 0X2F, 0XCB, 0X8A, 0X9, 0X2A, 0, 0, 0, 0, 0, 0X1, 0X25, 0X80, 0X2, 0X68, 0X44, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X25, 0X25, 0X40, 0, 0XC, 0XD, 0X8, 0XAA, 0X84, 0X1D, 0XA4, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0XB5, 0X80, 0X48, 0X48, 0X8, 0XE5, 0X29, 0X20, 0X8F, 0X6, 0XC7, 0X6E, 0X87, 0X32, 0X32, 0X4C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X64, 0X4F, 0X4F, 0X88, 0X52, 0X80, 0X4F, 0XBA, 0, 0X40, 0, 0, 0, 0, 0, 0, 0X2, 0X83, 0XDF, 0, 0, 0XDF, 0X50, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X20, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0X47, 0X7F, 0X7F, 0X47, 0X9A, 0X23, 0X95, 0X1A, 0X50, 0XDF, 0XDF, 0X50, 0X51, 0XA, 0X5, 0X4C, 0, 0, 0, 0, 0, 0X28, 0X50, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X47, 0X7F, 0X7F, 0X47, 0X9A, 0X23, 0X95, 0X1A, 0X50, 0XDF, 0XDF, 0X50, 0X51, 0XA, 0X5, 0X4C, 0, 0, 0, 0, 0, 0X50, 0XA0, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X47, 0X7F, 0X7F, 0X47, 0X9A, 0X23, 0X95, 0X1A, 0X50, 0XDF, 0XDF, 0X50, 0X51, 0XA, 0X5, 0X4C, 0, 0, 0, 0, 0, 0XA0, 0X40, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X76, 0XAF, 0X30, 0X3C, 0X2E, 0X25, 0X11, 0X3F, 0X1F, 0X7C, 0XF0, 0X21, 0, 0, 0, 0, 0, 0X1, 0X28, 0, 0X6, 0X5C, 0X28, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X1B, 0XF8, 0, 0, 0XC, 0XD, 0, 0XA2, 0XB0, 0X38, 0XA5, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0XCF, 0X95, 0X3D, 0X3D, 0X4, 0X7D, 0X2A, 0X20, 0X2F, 0X54, 0X2A, 0X98, 0X5C, 0XE9, 0XEA, 0X2A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X80, 0X63, 0X63, 0X84, 0X69, 0X1A, 0XEC, 0XF0, 0, 0X60, 0, 0, 0, 0, 0, 0, 0X9D, 0X8B, 0X57, 0, 0, 0X57, 0XED, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0X27, 0X1F, 0X1F, 0X27, 0XE3, 0X34, 0X48, 0XCC, 0XED, 0X57, 0X57, 0XED, 0X52, 0X12, 0X93, 0X48, 0, 0, 0, 0, 0, 0X32, 0X64, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X27, 0X1F, 0X1F, 0X27, 0XE3, 0X34, 0X48, 0XCC, 0XED, 0X57, 0X57, 0XED, 0X52, 0X12, 0X93, 0X48, 0, 0, 0, 0, 0, 0X64, 0XC8, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X27, 0X1F, 0X1F, 0X27, 0XE3, 0X34, 0X48, 0XCC, 0XED, 0X57, 0X57, 0XED, 0X52, 0X12, 0X93, 0X48, 0, 0, 0, 0, 0, 0XC8, 0X90, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X7D, 0XAF, 0X33, 0X35, 0X35, 0, 0X2, 0X2F, 0XCB, 0X8A, 0X9, 0X2A, 0, 0, 0, 0, 0, 0X1, 0X26, 0, 0X2, 0X68, 0X44, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X25, 0X25, 0X40, 0, 0XC, 0XD, 0X2, 0X3F, 0XE9, 0X2B, 0XA5, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X89, 0X90, 0X49, 0X49, 0X4, 0XED, 0X2A, 0X24, 0XE7, 0X3, 0X71, 0XBA, 0X6C, 0X60, 0X60, 0X3B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X78, 0X63, 0X63, 0X9C, 0X6B, 0X95, 0XE3, 0XF0, 0, 0X60, 0, 0, 0, 0, 0, 0, 0X84, 0X82, 0X57, 0, 0, 0X57, 0XE4, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X20, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XE7, 0X1F, 0X1F, 0XE7, 0XDB, 0X33, 0X5E, 0XC1, 0XE4, 0X57, 0X57, 0XE4, 0X52, 0X12, 0X77, 0X4B, 0, 0, 0, 0, 0, 0X32, 0X64, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XE7, 0X1F, 0X1F, 0XE7, 0XDB, 0X33, 0X5E, 0XC1, 0XE4, 0X57, 0X57, 0XE4, 0X52, 0X12, 0X77, 0X4B, 0, 0, 0, 0, 0, 0X64, 0XC8, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XE7, 0X1F, 0X1F, 0XE7, 0XDB, 0X33, 0X5E, 0XC1, 0XE4, 0X57, 0X57, 0XE4, 0X52, 0X12, 0X77, 0X4B, 0, 0, 0, 0, 0, 0XC8, 0X90, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X76, 0XA5, 0X3A, 0X2E, 0X2E, 0, 0X15, 0X3F, 0X1F, 0X7C, 0XF0, 0X21, 0, 0, 0, 0, 0, 0X1, 0X24, 0, 0X2, 0X58, 0X34, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X18, 0XF5, 0, 0, 0XC, 0XD, 0X2, 0X85, 0XDF, 0X26, 0XA0, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X39, 0, 0X69, 0X69, 0X8, 0, 0X28, 0X21, 0X73, 0X4, 0XB8, 0X64, 0X49, 0X80, 0X80, 0X2A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X8B, 0X7F, 0X7F, 0X8F, 0X81, 0X8, 0XB4, 0XF5, 0, 0X60, 0, 0, 0, 0, 0, 0, 0X51, 0X83, 0XFF, 0, 0, 0XFF, 0XB5, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0X7F, 0XFF, 0XFF, 0X7F, 0X23, 0X34, 0X8, 0X3E, 0XB5, 0XFF, 0XFF, 0XB5, 0X9A, 0X13, 0X4B, 0X68, 0, 0, 0, 0, 0, 0X40, 0X80, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X7F, 0XFF, 0XFF, 0X7F, 0X23, 0X34, 0X8, 0X3E, 0XB5, 0XFF, 0XFF, 0XB5, 0X9A, 0X13, 0X4B, 0X68, 0, 0, 0, 0, 0, 0X80, 0, 0X41, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X7F, 0XFF, 0XFF, 0X7F, 0X23, 0X34, 0X8, 0X3E, 0XB5, 0XFF, 0XFF, 0XB5, 0X9A, 0X13, 0X4B, 0X68, 0, 0, 0, 0, 0, 0, 0, 0X86, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X7D, 0XAF, 0X33, 0X35, 0X35, 0, 0X2, 0X2F, 0XCB, 0X8A, 0X9, 0X2A, 0, 0, 0, 0, 0, 0X1, 0X22, 0, 0X2, 0X68, 0X44, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X25, 0X25, 0X40, 0, 0XC, 0XD, 0, 0X1B, 0XC7, 0X21, 0XA0, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X9A, 0, 0X66, 0X66, 0X8, 0, 0X28, 0X24, 0XAF, 0X4, 0XB8, 0X45, 0X59, 0XA1, 0XA1, 0X2A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X91, 0X7F, 0X7F, 0X95, 0X82, 0XB, 0XB4, 0XF5, 0, 0X60, 0, 0, 0, 0, 0, 0, 0X3B, 0X86, 0XFF, 0, 0, 0XFF, 0XB5, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XAF, 0XFF, 0XFF, 0XAF, 0X23, 0X34, 0X16, 0X60, 0XB5, 0XFF, 0XFF, 0XB5, 0X9A, 0X13, 0X2B, 0X68, 0, 0, 0, 0, 0, 0X40, 0X80, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0XFF, 0XFF, 0XAF, 0X23, 0X34, 0X16, 0X60, 0XB5, 0XFF, 0XFF, 0XB5, 0X9A, 0X13, 0X2B, 0X68, 0, 0, 0, 0, 0, 0X80, 0, 0X41, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0XFF, 0XFF, 0XAF, 0X23, 0X34, 0X16, 0X60, 0XB5, 0XFF, 0XFF, 0XB5, 0X9A, 0X13, 0X2B, 0X68, 0, 0, 0, 0, 0, 0, 0, 0X86, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0X25, 0X76, 0XAF, 0X30, 0X3C, 0X2E, 0X25, 0X11, 0X3F, 0X1F, 0X7C, 0XF0, 0X21, 0, 0, 0, 0, 0, 0X1, 0X26, 0, 0X6, 0X60, 0X28, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X18, 0XFB, 0, 0, 0XC, 0XD, 0X2, 0XDF, 0X4B, 0X32, 0XA5, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0XBE, 0XA8, 0X28, 0X28, 0X4, 0X7D, 0X2A, 0X20, 0XAF, 0X94, 0X8D, 0X20, 0X7B, 0X90, 0X90, 0X3B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X91, 0X69, 0X69, 0X95, 0X7C, 0X7, 0X4C, 0XBA, 0, 0X40, 0, 0, 0, 0, 0, 0, 0X15, 0X8D, 0XDF, 0, 0, 0XDF, 0X4D, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XAF, 0X4F, 0X4F, 0XAF, 0XE3, 0X34, 0XE5, 0XA, 0X4D, 0XDF, 0XDF, 0X4D, 0X11, 0XA, 0X16, 0X4A, 0, 0, 0, 0, 0, 0X35, 0X6A, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0X4F, 0X4F, 0XAF, 0XE3, 0X34, 0XE5, 0XA, 0X4D, 0XDF, 0XDF, 0X4D, 0X11, 0XA, 0X16, 0X4A, 0, 0, 0, 0, 0, 0X6A, 0XD4, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0X4F, 0X4F, 0XAF, 0XE3, 0X34, 0XE5, 0XA, 0X4D, 0XDF, 0XDF, 0X4D, 0X11, 0XA, 0X16, 0X4A, 0, 0, 0, 0, 0, 0XD4, 0XA8, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X7D, 0XAF, 0X33, 0X35, 0X35, 0, 0X2, 0X2F, 0XCB, 0X8A, 0X9, 0X2A, 0, 0, 0, 0, 0, 0X1, 0X25, 0X80, 0X2, 0X68, 0X44, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X25, 0X25, 0X40, 0, 0XC, 0XD, 0, 0X3C, 0X2B, 0X2A, 0XA4, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0XBD, 0X50, 0X48, 0X48, 0XC, 0XE5, 0X29, 0X20, 0XAF, 0X9, 0XDF, 0X6E, 0X85, 0X32, 0X32, 0X4C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X91, 0X69, 0X69, 0X95, 0X7E, 0X3, 0X4F, 0XBA, 0, 0X40, 0, 0, 0, 0, 0, 0, 0X2, 0X8D, 0XDF, 0, 0, 0XDF, 0X50, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XAF, 0X4F, 0X4F, 0XAF, 0XE3, 0X34, 0XF6, 0XA, 0X50, 0XDF, 0XDF, 0X50, 0X11, 0XA, 0X4, 0X5B, 0, 0, 0, 0, 0, 0X35, 0X6A, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0X4F, 0X4F, 0XAF, 0XE3, 0X34, 0XF6, 0XA, 0X50, 0XDF, 0XDF, 0X50, 0X11, 0XA, 0X4, 0X5B, 0, 0, 0, 0, 0, 0X6A, 0XD4, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0X4F, 0X4F, 0XAF, 0XE3, 0X34, 0XF6, 0XA, 0X50, 0XDF, 0XDF, 0X50, 0X11, 0XA, 0X4, 0X5B, 0, 0, 0, 0, 0, 0XD4, 0XA8, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    }
};

static const VIABIOSSAA7108TableRec saa7108OverTable[] = {
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0X88, 0X76, 0XA5, 0X3A, 0X2E, 0X2E, 0, 0X11, 0X3F, 0X1F, 0X7C, 0XF0, 0X21, 0, 0, 0, 0, 0, 0X1, 0X2A, 0, 0X6, 0, 0X8C, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X13, 0X3, 0X40, 0, 0XC, 0XD, 0X9, 0X3B, 0XD6, 0X1D, 0XA4, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X9B, 0X80, 0X16, 0X16, 0X8, 0XE0, 0X29, 0X20, 0X3F, 0X6, 0XE0, 0, 0X88, 0, 0, 0X4C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X5F, 0X4F, 0X4F, 0X83, 0X52, 0X9F, 0XB, 0X3E, 0, 0X40, 0, 0, 0, 0, 0, 0, 0XEE, 0X83, 0XDF, 0, 0, 0XDF, 0XC, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X20, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0X1F, 0X7F, 0X7F, 0X1F, 0X9A, 0X23, 0X90, 0XFA, 0XC, 0XDF, 0XDF, 0XC, 0X11, 0XA, 0XEE, 0X31, 0, 0, 0, 0, 0, 0X28, 0X50, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X1F, 0X7F, 0X7F, 0X1F, 0X9A, 0X23, 0X90, 0XFA, 0XC, 0XDF, 0XDF, 0XC, 0X11, 0XA, 0XEE, 0X31, 0, 0, 0, 0, 0, 0X50, 0XA0, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X1F, 0X7F, 0X7F, 0X1F, 0X9A, 0X23, 0X90, 0XFA, 0XC, 0XDF, 0XDF, 0XC, 0X11, 0XA, 0XEE, 0X31, 0, 0, 0, 0, 0, 0XA0, 0X40, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X7D, 0XAF, 0X33, 0X35, 0X35, 0, 0X2, 0X2F, 0XCB, 0X8A, 0X9, 0X2A, 0, 0, 0, 0, 0, 0X1, 0X2E, 0, 0X2, 0X18, 0X94, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X17, 0X35, 0X40, 0, 0XC, 0XD, 0, 0X22, 0X22, 0X1A, 0XA4, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0XAB, 0X80, 0X16, 0X16, 0X8, 0XE0, 0X29, 0, 0X8F, 0X6, 0XC7, 0X89, 0X98, 0XC5, 0XC5, 0X4C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X64, 0X4F, 0X4F, 0X88, 0X53, 0X83, 0XB, 0X3E, 0, 0X40, 0, 0, 0, 0, 0, 0, 0XEE, 0X83, 0XDF, 0, 0, 0XDF, 0XC, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X20, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0X47, 0X7F, 0X7F, 0X47, 0X9A, 0X23, 0X95, 0X1A, 0XC, 0XDF, 0XDF, 0XC, 0X51, 0XA, 0XEE, 0X31, 0, 0, 0, 0, 0, 0X28, 0X50, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X47, 0X7F, 0X7F, 0X47, 0X9A, 0X23, 0X95, 0X1A, 0XC, 0XDF, 0XDF, 0XC, 0X51, 0XA, 0XEE, 0X31, 0, 0, 0, 0, 0, 0X50, 0XA0, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0X47, 0X7F, 0X7F, 0X47, 0X9A, 0X23, 0X95, 0X1A, 0XC, 0XDF, 0XDF, 0XC, 0X51, 0XA, 0XEE, 0X31, 0, 0, 0, 0, 0, 0XA0, 0X40, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0X88, 0X76, 0XA5, 0X3A, 0X2E, 0X2E, 0, 0X11, 0X3F, 0X1F, 0X7C, 0XF0, 0X21, 0, 0, 0, 0, 0, 0X1, 0X24, 0, 0X6, 0, 0X8C, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X13, 0X3, 0X40, 0, 0XC, 0XD, 0, 0X65, 0X77, 0X30, 0XA5, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0XC3, 0X90, 0X24, 0X24, 0X4, 0X58, 0X2A, 0X20, 0XF, 0X4, 0X34, 0X67, 0X6E, 0X33, 0X33, 0X3B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7D, 0X63, 0X63, 0X81, 0X69, 0X18, 0X8E, 0XF0, 0, 0X60, 0, 0, 0, 0, 0, 0, 0X64, 0X8B, 0X57, 0, 0, 0X57, 0X8F, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XF, 0X1F, 0X1F, 0XF, 0XE3, 0X34, 0X44, 0XBC, 0X8F, 0X57, 0X57, 0X8F, 0X52, 0X12, 0X59, 0X41, 0, 0, 0, 0, 0, 0X32, 0X64, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XF, 0X1F, 0X1F, 0XF, 0XE3, 0X34, 0X44, 0XBC, 0X8F, 0X57, 0X57, 0X8F, 0X52, 0X12, 0X59, 0X41, 0, 0, 0, 0, 0, 0X64, 0XC8, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XF, 0X1F, 0X1F, 0XF, 0XE3, 0X34, 0X44, 0XBC, 0X8F, 0X57, 0X57, 0X8F, 0X52, 0X12, 0X59, 0X41, 0, 0, 0, 0, 0, 0XC8, 0X90, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X7D, 0XAF, 0X33, 0X35, 0X35, 0, 0X2, 0X2F, 0XCB, 0X8A, 0X9, 0X2A, 0, 0, 0, 0, 0, 0X1, 0X2C, 0, 0X2, 0X18, 0X94, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X17, 0X35, 0X40, 0, 0XC, 0XD, 0, 0X5A, 0XD1, 0X28, 0XA5, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X82, 0X90, 0X20, 0X20, 0X4, 0X70, 0X2A, 0, 0X19, 0X4, 0XB, 0X23, 0X7E, 0XCD, 0XCD, 0X3B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X76, 0X63, 0X63, 0X9A, 0X68, 0X93, 0XBA, 0XF0, 0, 0X60, 0, 0, 0, 0, 0, 0, 0X83, 0X8B, 0X57, 0, 0, 0X57, 0XBB, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X20, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XD7, 0X1F, 0X1F, 0XD7, 0XDB, 0X33, 0X3B, 0X97, 0XBB, 0X57, 0X57, 0XBB, 0X52, 0X12, 0X83, 0X51, 0, 0, 0, 0, 0, 0X32, 0X64, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XD7, 0X1F, 0X1F, 0XD7, 0XDB, 0X33, 0X3B, 0X97, 0XBB, 0X57, 0X57, 0XBB, 0X52, 0X12, 0X83, 0X51, 0, 0, 0, 0, 0, 0X64, 0XC8, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XD7, 0X1F, 0X1F, 0XD7, 0XDB, 0X33, 0X3B, 0X97, 0XBB, 0X57, 0X57, 0XBB, 0X52, 0X12, 0X83, 0X51, 0, 0, 0, 0, 0, 0XC8, 0X90, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X76, 0XA5, 0X3A, 0X2E, 0X2E, 0, 0X15, 0X3F, 0X1F, 0X7C, 0XF0, 0X21, 0, 0, 0, 0, 0, 0X1, 0X22, 0, 0X2, 0, 0X8C, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X13, 0X3, 0X40, 0, 0XC, 0XD, 0XA, 0X76, 0XFF, 0X24, 0XA0, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0XAE, 0, 0X31, 0X31, 0X8, 0, 0X28, 0X24, 0XD7, 0X4, 0X18, 0, 0X5B, 0X80, 0X80, 0X2A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X96, 0X7F, 0X7F, 0X9A, 0X82, 0X12, 0X46, 0XF5, 0, 0X60, 0, 0, 0, 0, 0, 0, 0XF, 0X83, 0XFF, 0, 0, 0XFF, 0X47, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XD7, 0XFF, 0XFF, 0XD7, 0X23, 0X34, 0XF, 0X6A, 0X47, 0XFF, 0XFF, 0X47, 0X9A, 0X13, 0X4, 0X6F, 0, 0, 0, 0, 0, 0X40, 0X80, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XD7, 0XFF, 0XFF, 0XD7, 0X23, 0X34, 0XF, 0X6A, 0X47, 0XFF, 0XFF, 0X47, 0X9A, 0X13, 0X4, 0X6F, 0, 0, 0, 0, 0, 0X80, 0, 0X41, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XD7, 0XFF, 0XFF, 0XD7, 0X23, 0X34, 0XF, 0X6A, 0X47, 0XFF, 0XFF, 0X47, 0X9A, 0X13, 0X4, 0X6F, 0, 0, 0, 0, 0, 0, 0, 0X86, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X7D, 0XAF, 0X33, 0X35, 0X35, 0, 0X2, 0X2F, 0XCB, 0X8A, 0X9, 0X2A, 0, 0, 0, 0, 0, 0X1, 0X26, 0, 0X2, 0X18, 0X94, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X17, 0X35, 0X40, 0, 0XC, 0XD, 0, 0XDE, 0XDD, 0X1D, 0XA0, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X99, 0, 0X2F, 0X2F, 0X8, 0, 0X28, 0X24, 0XAF, 0X4, 0XF8, 0XF6, 0X5A, 0XFB, 0XFB, 0X2A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X91, 0X7F, 0X7F, 0X95, 0X82, 0XB, 0X46, 0XF5, 0, 0X60, 0, 0, 0, 0, 0, 0, 0X11, 0X83, 0XFF, 0, 0, 0XFF, 0X47, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XAF, 0XFF, 0XFF, 0XAF, 0X23, 0X34, 0XC, 0X56, 0X47, 0XFF, 0XFF, 0X47, 0X9A, 0X13, 0X4, 0X6F, 0, 0, 0, 0, 0, 0X40, 0X80, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0XFF, 0XFF, 0XAF, 0X23, 0X34, 0XC, 0X56, 0X47, 0XFF, 0XFF, 0X47, 0X9A, 0X13, 0X4, 0X6F, 0, 0, 0, 0, 0, 0X80, 0, 0X41, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0XFF, 0XFF, 0XAF, 0X23, 0X34, 0XC, 0X56, 0X47, 0XFF, 0XFF, 0X47, 0X9A, 0X13, 0X4, 0X6F, 0, 0, 0, 0, 0, 0, 0, 0X86, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0X88, 0X76, 0XA5, 0X3A, 0X2E, 0X2E, 0, 0X11, 0X3F, 0X1F, 0X7C, 0XF0, 0X21, 0, 0, 0, 0, 0, 0X1, 0X2A, 0, 0X6, 0, 0X8C, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X13, 0X3, 0X40, 0, 0XC, 0XD, 0, 0X2B, 0X98, 0X25, 0XA4, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X9B, 0X50, 0X16, 0X16, 0XC, 0XE0, 0X29, 0X20, 0XEF, 0X7, 0XB3, 0, 0X86, 0, 0, 0X4C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X79, 0X69, 0X69, 0X9D, 0X6B, 0X9B, 0XB, 0X3E, 0, 0X40, 0, 0, 0, 0, 0, 0, 0XE5, 0X8D, 0XDF, 0, 0, 0XDF, 0XC, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X20, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XEF, 0X4F, 0X4F, 0XEF, 0XDB, 0X33, 0X59, 0XA3, 0XC, 0XDF, 0XDF, 0XC, 0X51, 0XA, 0XE6, 0X2F, 0, 0, 0, 0, 0, 0X35, 0X6A, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XEF, 0X4F, 0X4F, 0XEF, 0XDB, 0X33, 0X59, 0XA3, 0XC, 0XDF, 0XDF, 0XC, 0X51, 0XA, 0XE6, 0X2F, 0, 0, 0, 0, 0, 0X6A, 0XD4, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XEF, 0X4F, 0X4F, 0XEF, 0XDB, 0X33, 0X59, 0XA3, 0XC, 0XDF, 0XDF, 0XC, 0X51, 0XA, 0XE6, 0X2F, 0, 0, 0, 0, 0, 0XD4, 0XA8, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X2, 0XF, 0XC3, 0, 0X2, 0X30, 0, 0X7D, 0XAF, 0X33, 0X35, 0X35, 0, 0X2, 0X2F, 0XCB, 0X8A, 0X9, 0X2A, 0, 0, 0, 0, 0, 0X1, 0X2E, 0, 0X2, 0X18, 0X94, 0X61, 0X90, 0X94, 0XB0, 0X78, 0XF9, 0X2A, 0XFA, 0X17, 0X35, 0X40, 0, 0XC, 0XD, 0, 0X55, 0X55, 0X25, 0XA4, 0X88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0X44, 0X50, 0X16, 0X16, 0XD, 0XE0, 0X29, 0, 0XAF, 0X9, 0XA0, 0X89, 0X96, 0XC5, 0XC5, 0X4C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X91, 0X69, 0X69, 0X95, 0X6D, 0X1, 0XB, 0X3E, 0, 0X40, 0, 0, 0, 0, 0, 0, 0XF7, 0X8D, 0XDF, 0, 0, 0XDF, 0XC, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0X40, 0X80, 0, 0X47, 0X1C, 0, 0 },
        { 0, 0, 0, 0X47, 0X1C, 0, 0, 0 },
        { 0XAF, 0X4F, 0X4F, 0XAF, 0XE3, 0X34, 0X66, 0XA, 0XC, 0XDF, 0XDF, 0XC, 0X11, 0XA, 0XE6, 0X2F, 0, 0, 0, 0, 0, 0X35, 0X6A, 0, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0X4F, 0X4F, 0XAF, 0XE3, 0X34, 0X66, 0XA, 0XC, 0XDF, 0XDF, 0XC, 0X11, 0XA, 0XE6, 0X2F, 0, 0, 0, 0, 0, 0X6A, 0XD4, 0X40, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0XAF, 0X4F, 0X4F, 0XAF, 0XE3, 0X34, 0X66, 0XA, 0XC, 0XDF, 0XDF, 0XC, 0X11, 0XA, 0XE6, 0X2F, 0, 0, 0, 0, 0, 0XD4, 0XA8, 0X81, 0, 0, 0X80, 0X20, 0X80, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X7, 0X43A, 0XB17, 0XB18, 0XB19, 0X38, 0X39, 0X3254, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0X6, 0XC3A, 0XB17, 0X1B18, 0XB19, 0X38, 0X39, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    }
};

#endif /* _VIA_SAA7108_H_ */
