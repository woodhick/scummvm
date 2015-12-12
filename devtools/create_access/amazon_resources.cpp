/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "amazon_resources.h"

namespace Amazon {

const byte MOUSE0[] = {
	// hotspot x and y, uint16 LE
	0, 0, 0, 0,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0, 2, 6, 1,
	0, 3, 6, 6, 1,
	0, 3, 6, 6, 1,
	0, 4, 6, 6, 6, 1,
	0, 4, 6, 6, 6, 1,
	0, 5, 6, 6, 6, 6, 1,
	0, 5, 6, 6, 6, 6, 1,
	0, 6, 6, 6, 6, 6, 6, 1,
	0, 6, 6, 6, 6, 6, 6, 1,
	0, 7, 6, 6, 6, 6, 6, 6, 1,
	0, 6, 6, 6, 6, 6, 6, 1,
	0, 5, 6, 6, 6, 6, 1,
	2, 3, 6, 6, 1,
	3, 3, 6, 6, 1,
	3, 3, 6, 6, 1,
	4, 2, 6, 1
};

const byte MOUSE1[] = {
	// hotspot x and y, uint16 LE
	0x07, 0x00, 0x07, 0x00,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0x06, 0x01, 0x05,
	0x04, 0x05, 0xFF, 0xFF, 0x00, 0xFF, 0xFF,
	0x03, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0x02, 0x09, 0xFF, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xFF,
	0x01, 0x0B, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0x01, 0x0B, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0x00, 0x0D, 0x05, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x05, 0x00, 0x05, 0x00, 0x00, 0x05,
	0x01, 0x0B, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0x01, 0x0B, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0x02, 0x09, 0xFF, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xFF,
	0x03, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0x04, 0x05, 0xFF, 0xFF, 0x00, 0xFF, 0xFF,
	0x06, 0x01, 0x05,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00
};

const byte MOUSE2[] = {
	// hotspot x and y, uint16 LE
	0x08, 0x00, 0x08, 0x00,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0x00, 0x00,
	0x00, 0x00,
	0x07, 0x02, 0x04, 0x05,
	0x07, 0x02, 0x04, 0x05,
	0x07, 0x02, 0x04, 0x05,
	0x07, 0x02, 0x04, 0x05,
	0x07, 0x02, 0x04, 0x05,
	0x02, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05,
	0x07, 0x02, 0x04, 0x05,
	0x07, 0x02, 0x04, 0x05,
	0x07, 0x02, 0x04, 0x05,
	0x07, 0x02, 0x04, 0x05,
	0x07, 0x02, 0x04, 0x05,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00
};

const byte MOUSE3[] = {
	// hotspot x and y, uint16 LE
	0x00, 0x00, 0x00, 0x00,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0x00, 0x0B, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
	0x00, 0x0C, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x05,
	0x00, 0x0C, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x05, 0x05,
	0x00, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05,
	0x00, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05,
	0x00, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x05, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x05,
	0x00, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05,
	0x00, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05,
	0x00, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05,
	0x00, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05,
	0x00, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05,
	0x00, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05,
	0x01, 0x0B, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00
};
const byte CURSEYE[] = {
	// hotspot x and y, uint16 LE
	0x01, 0x00, 0x08, 0x00,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0x04, 0x06, 0x0E, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D,
	0x03, 0x09, 0x0E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0D, 0x0D,
	0x02, 0x0B, 0x0E, 0x01, 0x33, 0x33, 0x01, 0x01, 0x33, 0x34, 0x01, 0x01, 0x0D,
	0x01, 0x0D, 0x0E, 0x01, 0x04, 0x34, 0x01, 0x01, 0x01, 0x07, 0x33, 0x04, 0x04, 0x01, 0x0D,
	0x00, 0x0F, 0x0E, 0x0E, 0x01, 0x07, 0x33, 0x33, 0x01, 0x01, 0x33, 0x34, 0x07, 0x07, 0x06, 0x01, 0x0E,
	0x01, 0x0D, 0x0F, 0x0F, 0x06, 0x07, 0x34, 0x33, 0x33, 0x34, 0x07, 0x07, 0x06, 0x0F, 0x0E,
	0x03, 0x09, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0E,
	0x01, 0x01, 0x07,
	0x00, 0x03, 0x07, 0x01, 0x07,
	0x01, 0x01, 0x07,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00
};

const byte CURSHAND[] = {
	// hotspot x and y, uint16 LE
	0x02, 0x00, 0x03, 0x00,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0x07, 0x02, 0x17, 0x0E,
	0x05, 0x07, 0x0E, 0x12, 0x17, 0x0E, 0x13, 0x17, 0x0E,
	0x02, 0x0C, 0x07, 0x00, 0x17, 0x0E, 0x11, 0x0F, 0x0E, 0x11, 0x17, 0x0E, 0x00, 0x17,
	0x01, 0x0E, 0x07, 0x01, 0x07, 0x0F, 0x0E, 0x11, 0x17, 0x0E, 0x11, 0x0F, 0x0E, 0x12, 0x17, 0x0E,
	0x02, 0x0D, 0x07, 0x00, 0x17, 0x0F, 0x12, 0x0F, 0x0F, 0x11, 0x17, 0x0E, 0x12, 0x0F, 0x0E,
	0x04, 0x0B, 0x0F, 0x0E, 0x11, 0x17, 0x0E, 0x12, 0x0F, 0x0F, 0x11, 0x17, 0x0E,
	0x04, 0x0B, 0x17, 0x0E, 0x12, 0x17, 0x0E, 0x12, 0x17, 0x0E, 0x11, 0x0F, 0x0E,
	0x00, 0x0F, 0x0E, 0x0D, 0x12, 0x00, 0x17, 0x0F, 0x0F, 0x0F, 0x0F, 0x12, 0x0F, 0x0E, 0x12, 0x17, 0x0F,
	0x00, 0x0F, 0x0F, 0x17, 0x0D, 0x11, 0x0F, 0x0E, 0x0D, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0E, 0x0D,
	0x01, 0x0E, 0x0F, 0x17, 0x0F, 0x0E, 0x0F, 0x0D, 0x0D, 0x0D, 0x0D, 0x0E, 0x0F, 0x0F, 0x0E, 0x0D,
	0x02, 0x0D, 0x0F, 0x17, 0x0F, 0x0E, 0x0D, 0x0D, 0x0F, 0x0F, 0x0E, 0x0F, 0x0E, 0x0E, 0x12,
	0x03, 0x0C, 0x0F, 0x17, 0x0F, 0x0F, 0x0F, 0x0E, 0x0F, 0x0F, 0x0F, 0x0E, 0x0D, 0x12,
	0x04, 0x0A, 0x0F, 0x17, 0x0F, 0x0F, 0x0F, 0x0E, 0x0F, 0x0F, 0x0E, 0x0D,
	0x05, 0x09, 0x0F, 0x17, 0x0F, 0x0F, 0x0F, 0x0F, 0x0E, 0x0D, 0x12,
	0x06, 0x08, 0x17, 0x0F, 0x0F, 0x0F, 0x0F, 0x0E, 0x0D, 0x12,
	0x06, 0x07, 0x17, 0x0F, 0x0F, 0x0F, 0x3D, 0x0E, 0x0D
};

const byte CURSGET[] = {
	// hotspot x and y, uint16 LE
	0x07, 0x00, 0x0E, 0x00,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0x0A, 0x05, 0x1C, 0x07, 0x0F, 0x0F, 0x0F,
	0x08, 0x08, 0x1C, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0C,
	0x06, 0x0A, 0x1C, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0C,
	0x05, 0x0A, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0C,
	0x03, 0x0C, 0x07, 0x1C, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0C,
	0x02, 0x0D, 0x1C, 0x0F, 0x0E, 0x0E, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0C,
	0x01, 0x0E, 0x07, 0x0F, 0x0E, 0x0D, 0x0F, 0x0E, 0x0D, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0C,
	0x00, 0x0F, 0x1C, 0x0F, 0x0E, 0x0D, 0x0F, 0x0E, 0x0D, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0C,
	0x00, 0x0F, 0x1C, 0x0E, 0x0D, 0x0F, 0x0E, 0x0D, 0x0F, 0x0F, 0x0C, 0x0C, 0x0E, 0x0F, 0x0F, 0x0F, 0x0C,
	0x00, 0x0E, 0x1C, 0x0D, 0x0F, 0x0E, 0x0D, 0x0F, 0x0F, 0x0C, 0x00, 0x00, 0x0E, 0x0F, 0x0F, 0x0C,
	0x00, 0x0E, 0x1C, 0x0E, 0x0F, 0x0D, 0x0F, 0x0F, 0x0C, 0x00, 0x00, 0x0E, 0x1C, 0x0F, 0x0F, 0x0C,
	0x00, 0x0D, 0x1C, 0x0D, 0x0F, 0x0D, 0x0F, 0x0C, 0x00, 0x00, 0x00, 0x0E, 0x1C, 0x0F, 0x0C,
	0x01, 0x0B, 0x0E, 0x0F, 0x0E, 0x0F, 0x0C, 0x00, 0x00, 0x0E, 0x07, 0x0F, 0x0C,
	0x02, 0x09, 0x0E, 0x0D, 0x0F, 0x0C, 0x00, 0x07, 0x0E, 0x0F, 0x0C,
	0x03, 0x06, 0x0E, 0x0F, 0x0E, 0x07, 0x01, 0x07,
	0x07, 0x01, 0x07
};

const byte CURSCLIMB[] = {
	// hotspot x and y, uint16 LE
	0x03, 0x00, 0x0E, 0x00,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0x06, 0x04, 0x01, 0x01, 0x01, 0x01,
	0x06, 0x04, 0x0F, 0x0E, 0x01, 0x01,
	0x06, 0x04, 0x0F, 0x0E, 0x0D, 0x01,
	0x07, 0x02, 0x0F, 0x0D,
	0x00, 0x0C, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x13, 0x12, 0x12, 0x12, 0x12, 0x11, 0x11,
	0x00, 0x0D, 0x0D, 0x0E, 0x00, 0x00, 0x13, 0x14, 0x13, 0x12, 0x12, 0x12, 0x11, 0x11, 0x0E,
	0x01, 0x0C, 0x0D, 0x0D, 0x0D, 0x0E, 0x11, 0x13, 0x13, 0x12, 0x11, 0x11, 0x0E, 0x0D,
	0x02, 0x0C, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x13, 0x12, 0x11, 0x00, 0x00, 0x0E, 0x0D,
	0x03, 0x0B, 0x04, 0x04, 0x04, 0x22, 0x21, 0x21, 0x20, 0x00, 0x00, 0x00, 0x0D,
	0x02, 0x0D, 0x22, 0x04, 0x20, 0x22, 0x04, 0x21, 0x04, 0x20, 0x00, 0x00, 0x00, 0x0E, 0x0E,
	0x03, 0x07, 0x22, 0x21, 0x20, 0x20, 0x22, 0x04, 0x20,
	0x04, 0x06, 0x01, 0x01, 0x00, 0x04, 0x22, 0x20,
	0x02, 0x09, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x04, 0x20,
	0x03, 0x09, 0x07, 0x01, 0x01, 0x00, 0x00, 0x00, 0x22, 0x04, 0x20,
	0x02, 0x0B, 0x07, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x20,
	0x03, 0x0A, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01
};

const byte CURSTALK[] = {
	// hotspot x and y, uint16 LE
	0x02, 0x00, 0x0B, 0x00,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0x03, 0x08, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
	0x01, 0x0C, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x06,
	0x00, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x07, 0x06, 0x07, 0x07, 0x06, 0x07, 0x07, 0x06, 0x07, 0x06,
	0x00, 0x0F, 0x06, 0x08, 0x08, 0x08, 0x06, 0x08, 0x06, 0x06, 0x08, 0x06, 0x06, 0x08, 0x06, 0x08, 0x06,
	0x00, 0x0F, 0x06, 0x06, 0x08, 0x06, 0x08, 0x06, 0x08, 0x06, 0x08, 0x06, 0x06, 0x08, 0x08, 0x06, 0x06,
	0x00, 0x0F, 0x06, 0x06, 0x08, 0x06, 0x08, 0x08, 0x08, 0x06, 0x08, 0x06, 0x06, 0x08, 0x06, 0x08, 0x06,
	0x01, 0x0E, 0x06, 0x08, 0x06, 0x08, 0x06, 0x08, 0x06, 0x08, 0x08, 0x06, 0x08, 0x06, 0x08, 0x06,
	0x02, 0x0C, 0x06, 0x06, 0x06, 0x07, 0x06, 0x07, 0x06, 0x06, 0x07, 0x06, 0x07, 0x06,
	0x04, 0x09, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x06, 0x06,
	0x07, 0x04, 0x06, 0x07, 0x07, 0x06,
	0x02, 0x08, 0x07, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06,
	0x01, 0x06, 0x07, 0x01, 0x07, 0x06, 0x06, 0x06,
	0x02, 0x01, 0x07,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00
};
const byte CURSHELP[] = {
	// hotspot x and y, uint16 LE
	0x02, 0x00, 0x0B, 0x00,
	// byte 1: number of skipped pixels
	// byte 2: number of plotted pixels
	// then, pixels
	0x04, 0x06, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24,
	0x02, 0x0A, 0x24, 0x24, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x20,
	0x01, 0x0C, 0x24, 0x22, 0x22, 0x22, 0x20, 0x20, 0x20, 0x22, 0x22, 0x22, 0x22, 0x20,
	0x00, 0x0E, 0x24, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x24, 0x22, 0x22, 0x22, 0x22, 0x20,
	0x00, 0x0E, 0x24, 0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x24, 0x22, 0x22, 0x22, 0x20,
	0x00, 0x0E, 0x24, 0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x24, 0x22, 0x22, 0x22, 0x20,
	0x01, 0x0D, 0x24, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x24, 0x22, 0x22, 0x22, 0x22, 0x20,
	0x07, 0x06, 0x24, 0x22, 0x22, 0x22, 0x22, 0x20,
	0x05, 0x07, 0x24, 0x22, 0x22, 0x22, 0x22, 0x20, 0x20,
	0x04, 0x05, 0x24, 0x22, 0x22, 0x22, 0x20,
	0x02, 0x07, 0x07, 0x00, 0x24, 0x20, 0x20, 0x20, 0x20,
	0x01, 0x03, 0x07, 0x01, 0x07,
	0x02, 0x07, 0x07, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24,
	0x04, 0x06, 0x24, 0x22, 0x22, 0x22, 0x22, 0x20,
	0x04, 0x06, 0x24, 0x22, 0x22, 0x22, 0x22, 0x20,
	0x05, 0x04, 0x20, 0x20, 0x20, 0x20
};

const byte *const CURSORS[AMAZON_NUM_CURSORS] = {
	MOUSE0, MOUSE1, MOUSE2, MOUSE3, CURSEYE, CURSHAND, CURSGET, CURSCLIMB, CURSTALK, CURSHELP
};
const uint CURSOR_SIZES[AMAZON_NUM_CURSORS] = {
	sizeof(MOUSE0), sizeof(MOUSE1), sizeof(MOUSE2), sizeof(MOUSE3), sizeof(CURSEYE),
	sizeof(CURSHAND), sizeof(CURSGET), sizeof(CURSCLIMB), sizeof(CURSTALK),	sizeof(CURSHELP)
};


const int FONT2_INDEX[] = {
	62, 2, 6,
	0x0000, 0x0019, 0x0021, 0x002e, 0x0041, 0x005a, 0x0073, 0x008c, 0x0093, 0x009b,
	0x00a3, 0x00bc, 0x00d5, 0x00dd, 0x00ea, 0x00f1, 0x00fe, 0x010b, 0x0118, 0x0125,
	0x0132, 0x013f, 0x014c, 0x0159, 0x0166, 0x0173, 0x0180, 0x0187, 0x018e, 0x01a7,
	0x01b4, 0x01cd, 0x01dc, 0x01f5, 0x0208, 0x0215, 0x0222, 0x022f, 0x023c, 0x0249,
	0x025c, 0x0269, 0x0276, 0x0285, 0x0292, 0x029f, 0x02b2, 0x02c5, 0x02d2, 0x02df,
	0x02ee, 0x02fb, 0x0308, 0x0315, 0x0322, 0x032f, 0x0342, 0x034f, 0x0362, 0x036f,
	0x0388, 0x03a1,
};

const byte FONT2_DATA[] = {
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0xf0, 0xf0, 0xf0,
	0x00, 0xf0, 0x00, 0x06, 0xf3, 0xc0, 0xc3, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x07, 0x1c, 0x00,
	0x67, 0x9e, 0xc0, 0x07, 0x1c, 0x00, 0x67, 0x9e, 0xc0, 0x07,
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0xc0, 0x00, 0x3f,
	0xfc, 0x00, 0xb2, 0xc0, 0x00, 0x3f, 0xfc, 0x00, 0x02, 0xcb,
	0x00, 0x3f, 0xfc, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x18, 0x60,
	0x70, 0x70, 0x60, 0x1c, 0x00, 0x04, 0x60, 0x18, 0x1c, 0x1c,
	0x1c, 0x70, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x30,
	0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0,
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf0, 0xf0,
	0x00, 0x07, 0x00, 0xf0, 0x03, 0xc0, 0x0f, 0x00, 0x3c, 0x00,
	0xf0, 0x00, 0x00, 0x00, 0x07, 0x3f, 0xc0, 0x70, 0x70, 0x70,
	0x70, 0x70, 0x70, 0x3f, 0xc0, 0x00, 0x00, 0x07, 0x1f, 0x00,
	0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0xff, 0xf0, 0x00, 0x00,
	0x08, 0x2b, 0xf0, 0xb0, 0x2c, 0x00, 0xa0, 0x0a, 0x00, 0xff,
	0xfc, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x70, 0x03, 0xc0,
	0x00, 0x70, 0xff, 0xc0, 0x00, 0x00, 0x07, 0x0b, 0xc0, 0x2d,
	0xc0, 0xb1, 0xc0, 0xaa, 0xa0, 0x01, 0xc0, 0x00, 0x00, 0x07,
	0xff, 0xf0, 0x70, 0x00, 0x7f, 0xc0, 0x00, 0xb0, 0xbf, 0xc0,
	0x00, 0x00, 0x07, 0x2f, 0xc0, 0x70, 0x00, 0x7f, 0xc0, 0x70,
	0x70, 0x3f, 0xc0, 0x00, 0x00, 0x08, 0xff, 0xfc, 0x00, 0xb0,
	0x02, 0xc0, 0x02, 0xc0, 0x0b, 0x00, 0x00, 0x00, 0x08, 0x2f,
	0xf0, 0xb0, 0x1c, 0x2f, 0xf0, 0xb0, 0x1c, 0x2f, 0xf0, 0x00,
	0x00, 0x07, 0x3f, 0xc0, 0x70, 0x70, 0x3f, 0xf0, 0x00, 0x70,
	0x3f, 0xc0, 0x00, 0x00, 0x03, 0xf0, 0xf0, 0x00, 0xf0, 0xf0,
	0x00, 0x03, 0xf0, 0xf0, 0x00, 0xf0, 0x30, 0x00, 0x09, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00,
	0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x06, 0xff, 0x00, 0x03, 0xc0, 0x0f, 0x00, 0x3c, 0x00,
	0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0a, 0x00, 0x40, 0x00, 0x01, 0xf0, 0x00, 0x07, 0x1c,
	0x00, 0x1f, 0xff, 0x00, 0x70, 0x01, 0xc0, 0x00, 0x00, 0x00,
	0x08, 0x7f, 0xf0, 0x70, 0x1c, 0x7f, 0xf0, 0x70, 0x1c, 0x6a,
	0xb0, 0x00, 0x00, 0x08, 0x2f, 0xfc, 0x70, 0x00, 0x70, 0x00,
	0x70, 0x00, 0x2a, 0xa8, 0x00, 0x00, 0x08, 0x7f, 0xf0, 0x70,
	0x1c, 0x70, 0x1c, 0x70, 0x1c, 0x6a, 0xb0, 0x00, 0x00, 0x07,
	0x7f, 0xf0, 0x70, 0x00, 0x7f, 0xc0, 0x70, 0x00, 0x6a, 0xa0,
	0x00, 0x00, 0x07, 0x7f, 0xf0, 0x70, 0x00, 0x7f, 0xc0, 0x70,
	0x00, 0x60, 0x00, 0x00, 0x00, 0x09, 0x3f, 0xfc, 0x00, 0x70,
	0x00, 0x00, 0x70, 0xff, 0x00, 0x70, 0x1c, 0x00, 0x2a, 0xbc,
	0x00, 0x00, 0x00, 0x00, 0x08, 0x70, 0x1c, 0x70, 0x1c, 0x7f,
	0xfc, 0x70, 0x1c, 0x70, 0x1c, 0x00, 0x00, 0x07, 0xff, 0xf0,
	0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0xaa, 0xa0, 0x00, 0x00,
	0x08, 0x0f, 0xfc, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x70,
	0x70, 0x2a, 0x40, 0x00, 0x00, 0x08, 0x70, 0x2c, 0x72, 0xc0,
	0x7f, 0x00, 0x72, 0xc0, 0x70, 0x28, 0x00, 0x00, 0x07, 0x70,
	0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x6a, 0xa0, 0x00,
	0x00, 0x0a, 0x70, 0x02, 0xc0, 0x7c, 0x09, 0xc0, 0x77, 0x2d,
	0xc0, 0x71, 0xb1, 0xc0, 0x60, 0xc1, 0x80, 0x00, 0x00, 0x00,
	0x09, 0x70, 0x07, 0x00, 0x77, 0x07, 0x00, 0x71, 0xc7, 0x00,
	0x70, 0x77, 0x00, 0x60, 0x06, 0x00, 0x00, 0x00, 0x00, 0x08,
	0x2f, 0xf0, 0x70, 0x1c, 0x70, 0x1c, 0x70, 0x1c, 0x2a, 0xa0,
	0x00, 0x00, 0x08, 0x7f, 0xf0, 0x70, 0x1c, 0x7f, 0xf0, 0x70,
	0x00, 0x60, 0x00, 0x00, 0x00, 0x08, 0x2f, 0xf0, 0x70, 0x1c,
	0x70, 0x1c, 0x71, 0xdc, 0x2a, 0xa0, 0x00, 0x1c, 0x00, 0x00,
	0x08, 0x7f, 0xf0, 0x70, 0x1c, 0x7f, 0xc0, 0x70, 0x70, 0x60,
	0x18, 0x00, 0x00, 0x07, 0x2f, 0xf0, 0x70, 0x00, 0x2f, 0xc0,
	0x00, 0xb0, 0xbf, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x0b,
	0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08,
	0x70, 0x1c, 0x70, 0x1c, 0x70, 0x1c, 0x70, 0xdc, 0x1f, 0x1c,
	0x00, 0x00, 0x08, 0xf0, 0x1c, 0xb0, 0x1c, 0x70, 0xb0, 0x72,
	0xc0, 0x7f, 0x00, 0x00, 0x00, 0x0b, 0xf0, 0x00, 0xb0, 0xb0,
	0x00, 0x70, 0x70, 0xc0, 0x70, 0x72, 0x72, 0xc0, 0x7c, 0x1f,
	0x00, 0x00, 0x00, 0x00, 0x08, 0xf0, 0x3c, 0x1c, 0xe0, 0x07,
	0xc0, 0x1c, 0x70, 0x70, 0x1c, 0x00, 0x00, 0x09, 0x70, 0x07,
	0x00, 0x1c, 0x1c, 0x00, 0x07, 0xf0, 0x00, 0x01, 0xc0, 0x00,
	0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x08, 0xff, 0xfc, 0x00,
	0x70, 0x07, 0x00, 0x1c, 0x00, 0xaa, 0xac, 0x00, 0x00, 0x09,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
};

const int FONT6x6_INDEX[] = {
	62, 1, 6,
	0x0000, 0x0007, 0x000e, 0x0015, 0x001c, 0x0023, 0x002a, 0x0031, 0x0038, 0x003f,
	0x0046, 0x004d, 0x0054, 0x005b, 0x0062, 0x0069, 0x0070, 0x0077, 0x007e, 0x0085,
	0x008c, 0x0093, 0x009a, 0x00a1, 0x00a8, 0x00af, 0x00b6, 0x00bd, 0x00c4, 0x00cb,
	0x00d2, 0x00d9, 0x00e0, 0x00e7, 0x00ee, 0x00f5, 0x00fc, 0x0103, 0x010a, 0x0111,
	0x0118, 0x011f, 0x0126, 0x012d, 0x0134, 0x013b, 0x0142, 0x0149, 0x0150, 0x0157,
	0x015e, 0x0165, 0x016c, 0x0173, 0x017a, 0x0181, 0x0188, 0x018f, 0x0196, 0x019d,
	0x01a4, 0x01ab,
};

const byte FONT6x6_DATA[] = {
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x30,
	0x30, 0x30, 0x00, 0x30, 0x06, 0xd8, 0xd8, 0x90, 0x00, 0x00,
	0x00, 0x06, 0x50, 0xf8, 0x50, 0xf8, 0x50, 0x00, 0x06, 0x78,
	0xa0, 0x70, 0x28, 0xf0, 0x20, 0x06, 0xc8, 0xd0, 0x20, 0x58,
	0x98, 0x00, 0x06, 0x60, 0xd0, 0x60, 0xe8, 0xd0, 0x68, 0x06,
	0x30, 0x30, 0x60, 0x00, 0x00, 0x00, 0x06, 0x30, 0x60, 0x60,
	0x60, 0x30, 0x00, 0x07, 0x30, 0x18, 0x18, 0x18, 0x30, 0x00,
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x20,
	0xf8, 0x20, 0x20, 0x00, 0x06, 0x00, 0x00, 0x00, 0x30, 0x30,
	0x60, 0x06, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x00, 0x00, 0x60, 0x60, 0x00, 0x06, 0x18, 0x30, 0x60, 0xc0,
	0x80, 0x00, 0x06, 0x70, 0x98, 0xa8, 0xc8, 0x70, 0x00, 0x06,
	0x10, 0x30, 0x10, 0x10, 0x10, 0x00, 0x06, 0xf0, 0x08, 0x70,
	0x80, 0xf8, 0x00, 0x06, 0xf0, 0x08, 0x70, 0x08, 0xf0, 0x00,
	0x06, 0x30, 0x50, 0x90, 0xf8, 0x10, 0x00, 0x06, 0xf0, 0x80,
	0xf0, 0x08, 0xf0, 0x00, 0x06, 0x70, 0x80, 0xf0, 0x88, 0x70,
	0x00, 0x06, 0xf8, 0x08, 0x10, 0x20, 0x20, 0x00, 0x06, 0x70,
	0x88, 0x70, 0x88, 0x70, 0x00, 0x06, 0x70, 0x88, 0x78, 0x08,
	0x70, 0x00, 0x06, 0x60, 0x60, 0x00, 0x60, 0x60, 0x00, 0x06,
	0x60, 0x60, 0x00, 0x60, 0x20, 0x40, 0x06, 0x18, 0x30, 0x60,
	0x30, 0x18, 0x00, 0x06, 0x00, 0x78, 0x00, 0x78, 0x00, 0x00,
	0x06, 0x60, 0x30, 0x18, 0x30, 0x60, 0x00, 0x06, 0x70, 0x98,
	0x30, 0x30, 0x00, 0x30, 0x06, 0x70, 0x88, 0xb8, 0xb0, 0x80,
	0x78, 0x06, 0x70, 0x88, 0xf8, 0x88, 0x88, 0x00, 0x06, 0xf0,
	0x88, 0xf0, 0x88, 0xf0, 0x00, 0x06, 0x78, 0x80, 0x80, 0x80,
	0x78, 0x00, 0x06, 0xf0, 0x88, 0x88, 0x88, 0xf0, 0x00, 0x06,
	0xf8, 0x80, 0xf0, 0x80, 0xf8, 0x00, 0x06, 0xf8, 0x80, 0xf0,
	0x80, 0x80, 0x00, 0x06, 0x78, 0x80, 0x98, 0x88, 0x78, 0x00,
	0x06, 0x88, 0x88, 0xf8, 0x88, 0x88, 0x00, 0x06, 0x70, 0x20,
	0x20, 0x20, 0x70, 0x00, 0x06, 0x08, 0x08, 0x08, 0x88, 0x70,
	0x00, 0x06, 0x90, 0xa0, 0xc0, 0xa0, 0x90, 0x00, 0x06, 0x80,
	0x80, 0x80, 0x80, 0xf0, 0x00, 0x06, 0x88, 0xd8, 0xa8, 0x88,
	0x88, 0x00, 0x06, 0x88, 0xc8, 0xa8, 0x98, 0x88, 0x00, 0x06,
	0x70, 0x88, 0x88, 0x88, 0x70, 0x00, 0x06, 0xf0, 0x88, 0xf0,
	0x80, 0x80, 0x00, 0x06, 0x70, 0x88, 0x88, 0x88, 0x70, 0x18,
	0x06, 0xf0, 0x88, 0xf0, 0xa0, 0x98, 0x00, 0x06, 0x78, 0x80,
	0x70, 0x08, 0xf0, 0x00, 0x06, 0xf8, 0x20, 0x20, 0x20, 0x20,
	0x00, 0x06, 0x88, 0x88, 0x88, 0x88, 0x78, 0x00, 0x06, 0x88,
	0x88, 0x88, 0x50, 0x20, 0x00, 0x06, 0x88, 0x88, 0xa8, 0xd8,
	0x88, 0x00, 0x06, 0x88, 0x50, 0x20, 0x50, 0x88, 0x00, 0x06,
	0x88, 0x88, 0x50, 0x20, 0x20, 0x00, 0x06, 0xf8, 0x10, 0x20,
	0x40, 0xf8, 0x00, 0x06, 0x78, 0x60, 0x60, 0x60, 0x78, 0x00,
	0x06, 0xc0, 0x60, 0x30, 0x18, 0x08, 0x00, 0x06, 0x78, 0x18,
	0x18, 0x18, 0x78, 0x00, 0x00, 0x52, 0x41, 0x54, 0x00, 0x41,
	0x4c, 0x43, 0x4f, 0x48, 0x4f, 0x4c, 0x00, 0x53, 0x41, 0x46,
	0x45, 0x20, 0x43, 0x4f, 0x4d, 0x42, 0x49, 0x4e, 0x41, 0x54,
	0x49, 0x4f, 0x4e, 0x00, 0x42, 0x45, 0x41, 0x4b, 0x45, 0x52,
	0x00, 0x4d, 0x49, 0x43, 0x52, 0x4f, 0x46, 0x49, 0x4c, 0x4d,
	0x00, 0x56, 0x41, 0x55, 0x4c, 0x54, 0x20, 0x4b, 0x45, 0x59,
	0x00, 0x42, 0x4f, 0x4c, 0x54, 0x20, 0x43, 0x55, 0x54, 0x54,
	0x45, 0x52, 0x53, 0x00, 0x42, 0x4c, 0x4f, 0x57, 0x47, 0x55,
	0x4e, 0x00, 0x4c, 0x4f, 0x56, 0x45, 0x20, 0x50, 0x4f, 0x54,
	0x49, 0x4f, 0x4e, 0x00, 0x4d, 0x4f, 0x4e, 0x45, 0x59, 0x00,
	0x44, 0x41, 0x52, 0x54, 0x53, 0x00, 0x54, 0x41, 0x50, 0x45,
	0x00, 0x4a, 0x55, 0x4e, 0x47, 0x4c, 0x45, 0x20, 0x50, 0x4f,
	0x54, 0x49, 0x4f, 0x4e, 0x00, 0x4d, 0x4f, 0x56, 0x49,
};

const uint FONT2_INDEX_SIZE = sizeof(FONT2_INDEX) / 2;
const uint FONT2_DATA_SIZE = sizeof(FONT2_DATA);
const uint FONT6x6_INDEX_SIZE = sizeof(FONT6x6_INDEX) / 2;
const uint FONT6x6_DATA_SIZE = sizeof(FONT6x6_DATA);

const char *const ROOM_DESCR[64] = {
	"Credits", nullptr, nullptr, nullptr, "Outside of Allister Center",
	"Hall", "Jason's Lab", nullptr, "Allen's Lab", "Outside of the Vault",
	"Inside the Vault", "Reader", "Jason's Apartment", "Jason's ransacked apartment", "Cutscene 1",
	"TBD FLYSOUTH", "Cuzco Airport", "TBD INAIR", "Green Monkey Club", "In Plane",
	"TBD PILFALL", "TBD COCKPIT", "TBD CRASH", "TBD SINKING", "Cutscene Jungle Walk",
	"TBD TOWN", "TBD HOTEL", "TBD CANTINA", nullptr, "TBD MASSACRE",
	"TBD TRADE", "TBD BRIDGE", "TBD DOCK", "TBD DRIVER", nullptr,
	nullptr, "TBD SHORE", "TBD BOAT", "TBD CABIN", "TBD CAPTIVE",
	nullptr, nullptr, "TBD VILLAGE", nullptr, "TBD TREE",
	"TBD CANOE", "TBD INTREE", "TBD FALLS", nullptr, nullptr,
	nullptr, nullptr, nullptr, nullptr, "TBD WATERFALL",
	"TBD INWATER", nullptr, "Cave Bridge", nullptr, nullptr,
	nullptr, "Pit with Ants", nullptr, nullptr
};


const byte DEATH_SCREENS_ENG[58] = {
	0,  1,  0,  0,  0,  0,  0,  0,  2,  0,
	0,  2,  4,  2,  1,  0,  0,  0,  0,  0,
	0,  2,  7,  7,  4,  6,  7, 10,  4,  2,
	0,  0,  0,  0,  5,  5,  3,  3,  3,  5,
	8,  8, 11,  9,  8, 12,  0,  1,  9,  8,
	8,  0,  5,  8,  0, 12, 12,  11
};

const byte DEATH_SCREENS_ENG_DEMO[34] = {
	1, 2, 1, 1, 1, 1, 1, 1, 4, 1,
	3, 4, 2, 4, 2, 1, 1, 1, 1, 1,
	1, 4, 2, 4, 2, 4, 2, 4, 4, 4,
	1, 1, 1, 1
};

const char *const DEATH_TEXT_ENG[58] = {
	"SAM SALVADOR SPOTS YOU AND LETS YOU HAVE IT.",
	"WHILE TAKING A MOONLIGHT SWIM YOU DISCOVER THAT PIRANHA REALLY CAN STRIP FLESH TO THE BONE.",
	"THE GUARD FILLS YOU FULL OF HOLES BEFORE TOSSING YOU TO THE PIRANHA.",
	"YOU'RE ONLY ABLE TO SWIM HALFWAY ACROSS THE RIVER BEFORE RUNNING OUT OF AIR.  "
	"YOU MAKE SO MUCH NOISE GASPING FOR BREATH THAT SAM EASILY FINDS YOU AND LEAVES "
	"YOU IN THE RIVER PERMANENTLY.",
	"SAM SALVADOR NOTICES SOMEONE HAS BEEN PLAYING WITH THE CARGO.  "
	"HE TRACKS YOU DOWN AND LETS YOU HAVE IT.",
	"THE GUARD COMES AROUND THE CORNER.  HE DECIDES THAT THREE LEAD SLUGS WILL "
	"TEACH YOU TO BE MORE POLITE.",
	"THE CAPTAIN IS WAITING OUTSIDE THE DOOR.",
	"THE CAPTAIN'S RANDOM SHOOTING FINALLY FINDS ITS TARGET.",
	"THE CRATE OUTSIDE THE WINDOW EXPLODES, DESTROYING THE SHIP.  "
	"UNFORTUNATELY, YOU'RE STILL ABOARD.",
	"THE DOOR WAS NOT BARRED AND THE CAPTAIN WALKS RIGHT IN AND PARTS YOUR HAIR.",

	"",
	"YOU RUN OUT ON DECK, THEN REALIZE THAT MAYA IS STILL TIED UP.  "
	"AS YOU TURN TO GO BACK THE BOAT BLOWS UP.",
	"AFTER YOU FAIL TO PROVE YOUR DIVINITY THE NATIVES EAT YOU FOR LUNCH.",
	"THIS IS THE GENERIC DEATH SCENE",
	"YOU ONLY MAKE IT HALFWAY ACROSS THE RIVER BEFORE THE PIRANHA STRIKE.",
	"WITH NOTHING TO PROTECT HIM FROM THE HAIL OF BULLETS ALLEN IS QUICKLY GUNNED DOWN.  "
	"JASON AND MAYA SOON FOLLOW...",
	"THE COMBINATION OF THE WIND AND GUNFIRE KNOCK THE CORRUGATED IRON OVER, "
	"LEAVING YOU WITHOUT PROTECTION.",
	"WITHOUT SUFFICIENT AMMUNITION, ALLEN IS UNABLE TO HOLD OFF THE ATTACKERS FOR LONG.  "
	"THIS RESULTS IN A SERIOUS CASE OF LEAD POISONING.  ADDITIONAL AMMUNITION SHOULD "
	"HAVE BEEN PURCHASED AT THE RIO BLANCO TRADING POST (CHAPTER 6).",
	"ALLEN IS A MARVELOUS SHOT, BUT HIS AMMUNITION IS NOT UNLIMITED.  "
	"SOON IT IS ALL OVER.",
	"THE PILOT FEELS YOU ARE TOO CLOSE AND PULLS THE TRIGGER.",

	"THE PILOT SHOOTS YOU IN THE HEART, THEN TOSSES YOUR LIFELESS BODY OUT THE DOOR.",
	"THE PLANE CRASHES INTO THE JUNGLE CANOPY AT 200 MPH.",
	"THE CANOE HITS THE ROCKS AND CAPSIZES, AND THE PIRANHA MAKE YOU THEIR LUNCH GUESTS.",
	"YOU TAKE THE WRONG BRANCH AND ACCIDENTALLY DISCOVER THE FOURTH TALLEST WATERFALL "
	"IN SOUTH AMERICA.",
	"YOU TAKE THE WRONG BRANCH AND DISCOVER A VERY HUNGRY TRIBE OF CANNIBALS.",
	"YOU TAKE THE WRONG BRANCH AND BECOME LOST IN THE WINDING WATERWAYS.  "
	"YOU WANDER UNTIL YOU STARVE TO DEATH.",
	"YOU TAKE THE WRONG BRANCH AND BECOME TRAPPED IN THE RAPIDS.  "
	"EVENTUALLY YOU AND MAYA ARE CRUSHED BETWEEN THE ROCKS.",
	"YOU WAIT AROUND FOR SOME TIME, BUT HANS STROHEIM NEVER SPEAKS TO YOU AGAIN.  "
	"FINALLY YOU RETURN HOME KNOWING YOU HAVE FAILED.",
	"DECIDING THAT YOU THREATEN HIM AND HIS WORK, HANS STROHEIM HAS THE NATIVES "
	"IN THE VILLAGE KILL YOU.",
	"YOU DO NOT GET FAR ENOUGH AWAY BEFORE THE DYNAMITE EXPLODES AND YOU ARE BLOWN "
	"INTO A THOUSAND PIECES.",

	"YOU ARE STANDING SO CLOSE TO THE ENTRANCE WHEN SANCEZ AND HIS MEN BREAK THROUGH "
	"THE WALL THAT YOU ARE QUICKLY SPOTTED AND SHOT",
	"THE AMAZON SENTINELS SPOT YOU AND FILL YOU FULL OF ARROWS.",
	"SAM MAY BE UGLY, BUT HE'S NOT DEAF.  HE HEARS ALL THE NOISE YOU ARE MAKING AND "
	"CANCELS YOUR BOARDING PASS.",
	"WITH THE BAR OFF THE DOOR THE CAPTAIN WALTZES IN AND BLOWS YOU AWAY",
	"THE BEAR WANDERS OFF INTO THE WOODS AND DISTURBS THE TWO LOVEBIRDS.  "
	"WHEN THEY COME OUT THEY FIND YOU AND PUT YOU IN THE BIG HOUSE FOR TWENTY YEARS.",
	"WHEN YOU DO NOT LEAVE THE SECURITY AREA QUICKLY ENOUGH YOU ARE ARRESTED AND CONVICTED "
	"AS A COMMIE SPY.  YOU EMBARK ON A NEW CAREER STAMPING OUT LICENSE PLATES.",
	"THE HUNGRY BEAR SPOTS YOU AND DECIDES YOU WILL MAKE A NICE APPETIZER.",
	"YOU DISTURB THE BEAR'S LUNCH AND HE EATS YOU FOR DESSERT.",
	"AFTER FAILING TO FIND ANY LUNCH AT THE GARBAGE CAN THE BEAR EATS YOU INSTEAD.",
	"THE SUSPICIOUS LIBRARIAN CALLS SECURITY AND YOU ARE SENT TO JAIL.",

	"YOU PLUMMET 10,000 FEET TO YOUR DEATH.",
	"EL LOCO FLIES INTO AN INSANE RAGE AND BEATS YOU TO A BLOODY PULP.",
	"THE WOMAN WALKS OUT THE DOOR AND NEVER RETURNS.  YOU SPEND THE REST OF YOUR LIFE "
	"IN A FUTILE ATTEMPT TO LOCATE ALLEN.",
	"YOU SLIP OFF THE PLATFORM AND FALL TO YOUR DEATH.",
	"YOU SLIP OFF THE PLATFORM AND FALL TO YOUR DEATH.",
	"YOU COME TOO CLOSE TO THE POWERFUL JAWS OF THE ANT AND HE SNIPS YOU IN TWO BEFORE "
	"DEVOURING YOU.",
	"B.O.B. HAS A FLAW IN HIS PROGRAMMING THAT DIRECTS HIM TO SHOOT FIRST AND ASK QUESTIONS LATER.",
	"THE PLANE SINKS AND THE PIRHANA ATTACK BEFORE YOU EVEN GET OUT THE DOOR.",
	"MAYA FALLS OFF THE END OF THE BROKEN BRIDGE.",
	"YOUR WEIGHT IS JUST ENOUGH TO CAUSE THE REMAINING SUPPORT CABLE TO SNAP AND YOU "
	"FALL TO THE BOTTOM OF THE GORGE.",

	"EVEN WITH REPAIRS THE BRIDGE IS NOT STRONG ENOUGH TO HOLD TWO PEOPLE.",
	"SANCHEZ AND HIS MEN FIND YOU AND HOLD FIRING SQUAD PRACTICE.",
	"THE TWO GUARDS ARE DISTURBED IN THEIR LOVE NEST AND COME LOOKING FOR ANYONE ACTING SUSPICIOUS.  "
	"THEY FIND YOU AND SEND YOU UP THE RIVER.",
	"THE PARACHUTE IS NOT LARGE ENOUGH TO SUPPORT YOU, AND YOU HIT THE TREES AT 140 M.P.H.",
	"SANCHEZ AND HIS MEN FOLLOW YOU ACROSS THE BRIDGE AND CUT YOU DOWN IN A HAIL OF GUNFIRE",
	"YOU TRIED TO STAB THE ANT BUT HIS SHELL IS TOO DIFFICULT TO PENETRATE.  "
	"YOU NOTICE A SLIGHT CUT IN THE SHELL UNDERNEATH BUT YOU CAN'T GET TO IT "
	"AND HE SNIPS YOU INTO DELICIOUS MEATY CHUNKS.",
	"AFTER THE ANT FINISHES SUCKING ALL OF THE SAP OUT OF THE VINE HE TURNS HIS ATTENTION BACK TO YOU "
	"AND BITES YOUR HEAD OFF.",
	"THE CANTINA OWNER NOTICES YOU ARE TRYING TO STEAL OBJECTS FROM THE TABLES.  "
	"TWENTY YEARS LATER YOU ARE RELEASED FROM A SOUTH AMERICAN PRISON."
};

const char *const DEATH_TEXT_ENG_DEMO[34] = {
	"SAM SALVADOR SPOTS YOU AND LETS YOU HAVE IT.",
	"WHILE TAKING A MOONLIGHT SWIM YOU DISCOVER THAT PIRANHA REALLY CAN STRIP FLESH TO THE BONE.",
	"THE GUARD FILLS YOU FULL OF HOLES BEFORE TOSSING YOU TO THE PIRANHA.",
	"YOU'RE ONLY ABLE TO SWIM HALFWAY ACROSS THE RIVER BEFORE RUNNING OUT OF AIR.  YOU MAKE SO MUCH NOISE GASPING FOR BREATH THAT SAM EASILY FINDS YOU AND LEAVES YOU IN THE RIVER PERMANENTLY.",
	"SAM SALVADOR NOTICES SOMEONE HAS BEEN PLAYING WITH THE CARGO. HE TRACKS YOU DOWN AND LETS YOU HAVE IT.",
	"THE GUARD COMES AROUND THE CORNER.  HE DECIDES THAT THREE LEAD SLUGS WILL TEACH YOU TO BE MORE POLITE.",
	"THE CAPTAIN IS WAITING OUTSIDE THE DOOR.",
	"THE CAPTAIN'S RANDOM SHOOTING FINALLY FINDS ITS TARGET.",
	"THE CRATE OUTSIDE THE WINDOW EXPLODES, DESTROYING THE SHIP.  UNFORTUNATELY, YOU'RE STILL ABOARD.",
	"THE DOOR WAS NOT BARRED AND THE CAPTAIN WALKS RIGHT IN AND PARTS YOUR HAIR.",
	"",
	"YOU RUN OUT ON DECK, THEN REALIZE THAT MAYA IS STILL TIED UP.  AS YOU TURN TO GO BACK THE BOAT BLOWS UP.",
	"AFTER YOU FAIL TO PROVE YOUR DIVINITY THE NATIVES EAT YOU FOR LUNCH.",
	"THIS IS THE GENERIC DEATH SCENE",
	"YOU ONLY MAKE IT HALFWAY ACROSS THE RIVER BEFORE THE PIRANHA STRIKE.",
	"WITH NOTHING TO PROTECT HIM FROM THE HAIL OF BULLETS ALLEN IS QUICKLY GUNNED DOWN.  JASON AND MAYA SOON FOLLOW...",
	"THE COMBINATION OF THE WIND AND GUNFIRE KNOCK THE CORRUGATED IRON OVER, LEAVING YOU WITHOUT PROTECTION.",
	"WITHOUT SUFFICIENT AMMUNITION, ALLEN IS UNABLE TO HOLD OFF THE ATTACKERS FOR LONG.  THIS RESULTS IN A SERIOUS CASE OF LEAD POISONING.",
	"ALLEN IS A MARVELOUS SHOT, BUT HIS AMMUNITION IS NOT UNLIMITED.  SOON IT IS ALL OVER.",
	"THE PILOT FEELS YOU ARE TOO CLOSE AND PULLS THE TRIGGER.",
	"THE PILOT SHOOTS YOU IN THE HEAD, THEN TOSSES YOUR LIFELESS",
	"THE PLANE CRASHES INTO THE JUNGLE CANOPY AT 200 MPH.",
	"THE CANOE HITS THE ROCKS AND CAPSIZES, AND THE PIRANHA MAKE YOU THEIR LUNCH GUESTS.",
	"YOU ACCIDENTALLY DISCOVER THE FOURTH TALLEST WATERFALL IN SOUTH AMERICA.",
	"YOU DISCOVER A VERY HUNGRY TRIBE OF CANNIBALS.",
	"YOU BECOME LOST IN THE WINDING WATERWAYS AND WANDER UNTIL YOU STARVE TO DEATH.",
	"YOU BECOME TRAPPED IN THE RAPIDS AND ARE CRUSHED BETWEEN THE ROCKS.",
	"YOU WAIT AROUND FOR SOME TIME, BUT HANS STROHEIM NEVER SPEAKS TO YOU AGAIN.  FINALLY YOU RETURN HOME KNOWING YOU HAVE FAILED.",
	"DECIDING THAT YOU THREATEN HIM AND HIS WORK, HANS STROHEIM HAS THE NATIVES IN THE VILLAGE KILL YOU.",
	"YOU DO NOT GET FAR ENOUGH AWAY BEFORE THE DYNAMITE EXPLODES AND YOU ARE BLOWN INTO A THOUSAND PIECES.",
	"STANDING OUT IN THE OPEN YOU ARE EXPOSED TO THE HAIL OF BULLETS FROM SANCHEZ' MEN.",
	"THE AMAZON SENTINELS SPOT YOU AND FILL YOU FULL OF ARROWS.",
	"SAM MAY BE UGLY, BUT HE'S NOT DEAF.  HE HEARS ALL THE NOISE YOU ARE MAKING AND CANCELS YOUR BOARDING PASS.",
	"WITH THE BAR OFF THE DOOR THE CAPTAIN WALTZES IN AND BLOWS YOU AWAY"
};

const char *const INVENTORY_NAMES_ENG[85] = {
	"RAT", "ALCOHOL", "SAFE COMBINATION", "BEAKER", "MICROFILM",
	"VAULT KEY", "BOLT CUTTERS", "BLOWGUN", "LOVE POTION", "MONEY",
	"DARTS", "TAPE", "JUNGLE POTION", "MOVIE", "CABINET KEY",
	"DISPLAY CASE KEY", "FLITCH'S CAR KEYS", "COAT HANGER",
	"CROWBAR", "COMPASS", "MAP", "LETTER OPENER", "LETTER",
	"DECODER", "DIPPED DART", "LOADED BLOWGUN", "CARD", "JERRYCAN",
	"CIGARETTES", "BIKE PUMP", "PARACHUTE", "PESO", "PEPPERS",
	"MACHETE", "POISON ROOT", "AMMUNITION", "PADDLE", "FISHING NET",
	"RAT TRAP", "CHEESE", "LOADED TRAP", "KNIFE", "CHOPPED PEPPERS",
	"LIGHTER", "LADDER", "SMALL POLE", "JEEP KEY", "CHAIN", "ARROW",
	"FILLED JERRY CAN", "EXPLOSIVES", "GEIGER COUNTER", "VINE",
	"GOLD NUGGET", "HOLLOW REED", "AMAZON QUEEN KEYS", "FISHING POLE",
	"HARPOON", "RAG", "BOTTLE OF RUM", "RAG IN BOTTLE", "MOLOTOV COCKTAIL",
	"JUNGLE PLANT", "LADLE", "WORM", "FISH", "FIREWORKS", "BAITED POLE",
	"FILLED LADLE", "EMERALD", "SMALL KEY", "SCROLL", "LIT EXPLOSIVES",
	"LIGHTER", "BROKEN SPEAR", "SHOE LACES", "TORCH", "LACES AND SPEAR",
	"KNIFE SPEAR", "GARBAGE CAN", "RAFT", "INFLATED RAFT",
	"JASON'S CAR KEYS", "PESO BILLS", "PLANK"
};

const int COMBO_TABLE[85][4] = {
	{ -1, -1, -1, -1 },
	{ 12, 3, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 24, 25, -1, -1 },
	{ 10, 24, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 8, 24, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 1, 3, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 7, 25, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 80, 81, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 41, 42, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 39, 40, -1, -1 },
	{ 38, 40, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 32, 42, 77, 78 },
	{ -1, -1, -1, -1 },
	{ 60, 61, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 73, 72, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 64, 67, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 59, 60, -1, -1 },
	{ 58, 60, -1, -1 },
	{ 43, 61, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 56, 67, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 50, 72, -1, -1 },
	{ 75, 77, -1, -1 },
	{ 74, 77, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 41, 78, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ 29, 81, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 },
	{ -1, -1, -1, -1 }
};

const char *const NO_HELP_MESSAGE_ENG =
"WE ARE UNABLE TO PROVIDE YOU WITH ANY MORE HINTS.  YOUR IQ \
HAS DECREASED SO FAR THAT WE CAN NO LONGER PUT THE HINTS IN TERMS \
YOU CAN UNDERSTAND.";
const char *const NO_HINTS_MESSAGE_ENG = "THE HELP SYSTEM HAS BEEN TURNED OFF FOR THIS GAME.";
const char *const RIVER_HIT1_ENG = "YOU HIT THE ROCKS AND THE CANOE BEGINS TO LEAK.";
const char *const RIVER_HIT2_ENG = "YOU HIT THE ROCKS AND THE CANOE DEVELOPS SERIOUS LEAKS.";
const char *const BAR_MESSAGE_ENG = "YOU ARE TOO BUSY TRYING TO KEEP FROM SINKING TO DO THAT";
const char *const HELPLVLTXT_ENG[3] = { " LEVEL 1 ", " LEVEL 2 ", " LEVEL 3 " };

const char *const IQLABELS_ENG[9] = {
	"VEGETABLE",
	"NEANDERTHAL",
	"LOBOTOMIZED",
	"DENSE",
	"AVERAGE",
	"INTELLIGENT",
	"MURPHYITE",
	"BRILLIANT",
	"GENIUS"
};

const char *const CANT_GET_THERE_ENG = "YOU CAN'T GET THERE FROM HERE.";

} // End of namespace Amazon