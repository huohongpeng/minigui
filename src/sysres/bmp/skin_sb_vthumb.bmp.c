///////////////////////////////////////////////////////////////////////////////
//
//                          IMPORTANT NOTICE
//
// The following open source license statement does not apply to any
// entity in the Exception List published by FMSoft.
//
// For more information, please visit:
//
// https://www.fmsoft.cn/exception-list
//
//////////////////////////////////////////////////////////////////////////////
/*
 *   This file is part of MiniGUI, a mature cross-platform windowing
 *   and Graphics User Interface (GUI) support system for embedded systems
 *   and smart IoT devices.
 *
 *   Copyright (C) 2002~2018, Beijing FMSoft Technologies Co., Ltd.
 *   Copyright (C) 1998~2002, WEI Yongming
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *   Or,
 *
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 *
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 *
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/blog/minigui-licensing-policy/>.
 */

#include "common.h"

#ifdef _MGINCORE_RES

//data of "skin_sb_vthumb.bmp"

const unsigned char _mgir_bmp_skin_sb_vthumb_data[]={
    0x42,0x4D,0xB8,0x10,0x00,0x00,0x00,0x00,    0x00,0x00,0x36,0x00,0x00,0x00,0x28,0x00,
    0x00,0x00,0x0F,0x00,0x00,0x00,0x58,0x00,    0x00,0x00,0x01,0x00,0x18,0x00,0x00,0x00,
    0x00,0x00,0x82,0x10,0x00,0x00,0x12,0x0B,    0x00,0x00,0x12,0x0B,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0xAE,0xAE,0xAF,0xAC,0xAC,0xAC,0xAB,
    0xAB,0xAB,0xAA,0xAA,0xAA,0xA9,0xA9,0xA9,    0xA7,0xA7,0xA7,0xA5,0xA5,0xA5,0xA4,0xA4,
    0xA4,0xA2,0xA2,0xA2,0xA1,0xA1,0xA1,0x9F,    0x9F,0x9F,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x81,0x81,0x81,0x77,0x77,0x77,0x72,
    0x72,0x72,0x6B,0x6B,0x6B,0x64,0x64,0x64,    0x5D,0x5D,0x5D,0x55,0x55,0x55,0x4D,0x4D,
    0x4D,0x45,0x45,0x45,0x3E,0x3E,0x3E,0x37,    0x37,0x37,0x30,0x30,0x30,0x30,0x30,0x30,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7D,0x7D,0x7D,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x8F,0x8F,0x8F,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x81,0x81,0x81,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x81,0x81,0x81,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x81,0x81,0x81,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x81,0x81,0x81,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x81,0x81,0x81,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x81,0x81,0x81,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7D,0x7D,0x7D,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8D,0x8D,0x8D,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7D,0x7D,0x7D,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x87,0x87,0x87,0x86,0x86,
    0x86,0x84,0x84,0x84,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7D,0x7D,0x7D,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x83,0x83,0x83,0x81,0x81,0x81,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x90,0x90,0x90,0x90,0x90,0x90,0x8F,
    0x8F,0x8F,0x8E,0x8E,0x8E,0x8B,0x8B,0x8B,    0x8A,0x8A,0x8A,0x88,0x88,0x88,0x86,0x86,
    0x86,0x84,0x84,0x84,0x82,0x82,0x82,0x7F,    0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0xF9,0xF9,    0xF9,0x36,0x36,0x36,0x36,0x36,0x36,0x33,
    0x33,0x33,0x30,0x30,0x30,0x2D,0x2D,0x2D,    0x29,0x29,0x29,0x25,0x25,0x25,0x22,0x22,
    0x22,0x1E,0x1E,0x1E,0x1A,0x1A,0x1A,0x17,    0x17,0x17,0x14,0x14,0x14,0x14,0x14,0x14,
    0xF9,0xF9,0xF9,0x00,0x00,0x00,0x00,0x00
};
#endif //_MGINCORE_RES

