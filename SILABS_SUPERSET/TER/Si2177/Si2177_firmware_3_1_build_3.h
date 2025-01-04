/*************************************************************************************************************
Copyright 2015-2019, Silicon Laboratories, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
 *************************************************************************************************************/
#ifndef _SI2177_FIRMWARE_3_1_BUILD_3_H_
#define _SI2177_FIRMWARE_3_1_BUILD_3_H_

#define FIRMWARE_MAJOR        3
#define FIRMWARE_MINOR        1
#define BUILD_VERSION         3

#ifndef __FIRMWARE_STRUCT__
#define __FIRMWARE_STRUCT__
typedef struct firmware_struct {
	unsigned char firmware_len;
	unsigned char firmware_table[16];
} firmware_struct;
#endif /* __FIRMWARE_STRUCT__ */

const firmware_struct Si2177_FW_3_1b3[] = {
{ 16 , { 0xBF,0x11,0x9D,0xBE,0x50,0xD4,0xBD,0xDA,0x07,0x10,0x18,0x87,0xD0,0x59,0xF1,0x18 } },
{ 8 , { 0x05,0x0E,0xFD,0x24,0xB7,0x6F,0x5A,0xE2 } },
{ 13 , { 0x3C,0x0E,0xB1,0x4F,0x96,0x5B,0x81,0xA0,0x5C,0x02,0x4B,0xB4,0x89 } },
{ 11 , { 0x05,0x3C,0xB4,0xC6,0x2D,0x40,0xE9,0x1F,0x42,0x42,0xB7 } },
{ 16 , { 0x0F,0x88,0x48,0x7E,0xD0,0x06,0xDC,0x22,0x05,0x6E,0x50,0xA8,0x14,0x37,0xEB,0xB6 } },
{ 11 , { 0x42,0x73,0xB9,0x05,0xCA,0x5E,0x77,0xD8,0xBA,0x49,0xC5 } },
{ 9 , { 0x30,0xAC,0x35,0x0A,0x75,0x49,0x50,0xFA,0xB2 } },
{ 14 , { 0x05,0x31,0x19,0x0D,0x59,0x59,0xAD,0x01,0x45,0xC5,0x04,0x44,0x3B,0xC4 } },
{ 8 , { 0x05,0x8C,0x92,0x8C,0xCD,0xDB,0x07,0xC1 } },
{ 15 , { 0x36,0x3A,0x72,0xE3,0x88,0x65,0x3F,0x31,0xED,0xDF,0x6D,0x72,0x80,0xDE,0xF9 } },
{ 11 , { 0x05,0x29,0xF3,0x8C,0x20,0xE8,0x14,0xDB,0x4A,0x85,0xAD } },
{ 11 , { 0x05,0x20,0x08,0xE8,0xC8,0x76,0xEE,0xDC,0x4A,0x47,0x03 } },
{ 11 , { 0x05,0xA0,0xFA,0xED,0x01,0x6F,0x43,0x27,0x42,0x4A,0x08 } },
{ 8 , { 0x05,0x4F,0x11,0x5A,0x1B,0xE9,0xCE,0xEE } },
{ 9 , { 0x30,0x11,0x65,0x27,0xAB,0x1F,0xED,0x4E,0x05 } },
{ 14 , { 0x05,0xF9,0x20,0xFB,0xFC,0x3A,0x73,0x6B,0x45,0xD7,0x1E,0x15,0x35,0x4D } },
{ 11 , { 0x05,0xBD,0x9B,0x16,0x01,0xC2,0xB3,0xA0,0x42,0x5E,0x6C } },
{ 16 , { 0x0F,0x5C,0x01,0x1A,0xE0,0x20,0xF4,0x3C,0x05,0xDD,0xBA,0xC0,0xA7,0x0E,0x89,0x2F } },
{ 11 , { 0x42,0x2B,0xAD,0x05,0x32,0x35,0xA0,0x13,0xAB,0x74,0xDC } },
{ 16 , { 0x3F,0x5C,0x6B,0xDE,0x40,0x4F,0xD1,0x52,0x29,0xD2,0xFC,0x54,0x69,0xBB,0x46,0xEA } },
{ 14 , { 0x3D,0x55,0xE3,0x5C,0xFB,0x8D,0x1D,0xC7,0x0B,0x40,0x86,0xC4,0x86,0x7B } },
{ 8 , { 0x0F,0x37,0x3E,0x3C,0x27,0x51,0x86,0xEC } },
{ 16 , { 0x3F,0x76,0x82,0xC6,0xF0,0x80,0xE5,0x89,0x82,0xC6,0x24,0x1C,0x5A,0x9F,0x1C,0x23 } },
{ 16 , { 0x3F,0x17,0x83,0x09,0x4B,0xA3,0xD5,0x38,0x4C,0x9C,0x3B,0x7D,0x81,0xDA,0xB8,0xAF } },
{ 13 , { 0x34,0xC2,0x27,0xB2,0x62,0x76,0x2F,0x6B,0xB2,0x41,0xF1,0xE9,0xDF } },
{ 8 , { 0x07,0x64,0x83,0x02,0xA7,0xEB,0x07,0x3D } },
{ 16 , { 0x37,0xA5,0x16,0x08,0x94,0xCE,0xA0,0x78,0xFC,0xE0,0x76,0x82,0xAC,0x7E,0xCA,0x04 } },
{ 16 , { 0x37,0x52,0x56,0x19,0x09,0x8B,0x9C,0xD7,0x17,0x16,0xDB,0x47,0xD6,0xD4,0xAC,0xFE } },
{ 16 , { 0x3F,0x5F,0xEE,0xF2,0x70,0xDC,0x9F,0x49,0xB5,0x93,0xD6,0xDD,0x8C,0xAC,0xE8,0x2F } },
{ 16 , { 0x3F,0x0D,0x9C,0x41,0xE3,0xA1,0x72,0x58,0x6A,0x28,0x3A,0x8F,0x6E,0x29,0x02,0x11 } },
{ 16 , { 0x37,0x3F,0xE6,0x31,0xEC,0x8C,0x72,0x7A,0x36,0xA3,0xFD,0xFA,0xA6,0xFB,0x37,0x86 } },
{ 16 , { 0x37,0x30,0x9C,0x18,0x8C,0x7C,0x8D,0xAB,0xE8,0x46,0x84,0x3C,0x25,0x48,0x89,0xA7 } },
{ 16 , { 0x37,0xE9,0x31,0x40,0x29,0x27,0xE8,0x9C,0x0A,0x1E,0x5C,0x7A,0x3B,0x18,0x99,0xAD } },
{ 16 , { 0x3F,0x2A,0x4B,0xE5,0x18,0x71,0x86,0x0A,0x3C,0x4A,0xDB,0x33,0xFD,0x63,0x82,0x07 } },
{ 16 , { 0x37,0x15,0xCE,0x58,0xB9,0x18,0x4A,0xD6,0x4B,0xF8,0xDA,0x4C,0xBF,0x41,0x43,0xDF } },
{ 16 , { 0x3F,0x63,0x6E,0x68,0x60,0xB1,0x9B,0x53,0xED,0x6C,0x72,0x95,0x62,0xC1,0xAA,0x0F } },
{ 16 , { 0x3F,0x42,0x0C,0xC8,0x23,0x48,0x7C,0x47,0x71,0xE8,0xFC,0x6A,0x6C,0x43,0xE3,0x36 } },
{ 16 , { 0x37,0xA1,0x18,0x87,0xDB,0xDA,0x82,0xA5,0xC0,0xB4,0xEC,0xF0,0x54,0x00,0x55,0xD4 } },
{ 16 , { 0x37,0x5E,0x9E,0xEF,0x2F,0xEF,0x41,0x48,0x80,0x51,0x85,0x0A,0xBE,0xDB,0x15,0xCF } },
{ 16 , { 0x37,0x30,0x15,0xFB,0xB0,0x6A,0xB9,0x01,0x5E,0x1C,0xE6,0xBA,0x26,0x99,0x44,0x46 } },
{ 16 , { 0x3F,0xF0,0xFA,0x06,0x5C,0x90,0x37,0x36,0xEB,0xF7,0xFC,0x73,0x58,0xD8,0x4D,0x13 } },
{ 16 , { 0x3F,0xC9,0xCB,0xC9,0x43,0xCF,0xDE,0x97,0xA7,0xA7,0xBE,0x17,0x8A,0xB6,0xAD,0xDE } },
{ 16 , { 0x37,0x2E,0x42,0x72,0x11,0x3B,0x6A,0xAD,0x11,0xD9,0x14,0xCD,0x98,0x85,0xAF,0x21 } },
{ 10 , { 0x39,0x01,0xC7,0xA5,0x3D,0x63,0x16,0xED,0x35,0xA0 } },
{ 16 , { 0x0F,0x48,0xD1,0x02,0x0D,0x99,0xD4,0x5F,0x47,0x0B,0x4A,0xCB,0x6F,0xA0,0xF2,0xE7 } },
{ 8 , { 0x0F,0x69,0xEE,0x70,0x2D,0x38,0xE2,0xDE } },
{ 16 , { 0x3F,0x74,0x0F,0x85,0xE8,0xD9,0xE2,0x85,0x69,0x9C,0x68,0x30,0x73,0x49,0x29,0x3A } },
{ 16 , { 0x3F,0x05,0x41,0x8A,0x0D,0x9F,0x08,0x43,0xAC,0xCF,0x2B,0x33,0x46,0x4A,0x44,0xAD } },
{ 16 , { 0x37,0x29,0xE9,0x82,0x6B,0x42,0xBE,0x20,0x0B,0x8C,0xA8,0x12,0x8B,0x6C,0x4F,0x3D } },
{ 11 , { 0x3A,0x9C,0x93,0x67,0x3C,0xF3,0xC3,0x2A,0xA5,0x45,0x83 } },
{ 8 , { 0x07,0x30,0x2D,0xF3,0xBD,0xA3,0xC9,0x57 } },
{ 16 , { 0x3F,0x9F,0xD6,0x7F,0xA4,0xC2,0xF7,0xFB,0x01,0xCF,0x19,0x33,0x27,0xDD,0xCD,0x61 } },
{ 11 , { 0x4A,0x81,0xF1,0x0F,0x67,0xCC,0x33,0x28,0xA7,0xB8,0xCA } },
{ 16 , { 0x37,0x69,0xDD,0x9F,0x60,0xB7,0xC2,0xE3,0xF8,0x31,0xE2,0x50,0x3C,0xBD,0xCA,0x83 } },
{ 10 , { 0x41,0x1E,0x0F,0x47,0x5E,0x11,0x12,0x2B,0xB7,0xB3 } },
{ 16 , { 0x3F,0x7F,0xFE,0x97,0xCB,0xFC,0xD6,0x0B,0x4C,0x7E,0x10,0x2F,0x3C,0x28,0x3A,0xF6 } },
{ 16 , { 0x37,0xC4,0xAA,0xF8,0x1C,0x58,0x1C,0x21,0x9A,0x67,0x84,0x92,0xC2,0x76,0xD6,0xE8 } },
{ 16 , { 0x37,0xBD,0x66,0xD4,0x25,0x86,0x2A,0x13,0xB5,0x92,0x47,0x03,0x8C,0xB3,0x5C,0x9C } },
{ 16 , { 0x3F,0xD7,0xAB,0x01,0xD2,0xF7,0xE1,0xEA,0xCC,0x49,0x30,0x80,0x0D,0x00,0x3D,0x60 } },
{ 16 , { 0x4F,0x4C,0xE1,0x6B,0xE9,0x53,0x8F,0x3F,0x07,0xA9,0xB3,0x62,0xA0,0x66,0x98,0x44 } },
{ 16 , { 0x37,0xAF,0xD7,0x87,0xAF,0xE5,0x0F,0x18,0x0E,0xE4,0xE8,0xB8,0xB9,0x9A,0xB7,0x10 } },
{ 16 , { 0x3F,0x70,0x9C,0xD1,0x3C,0xCB,0x03,0xF9,0x21,0x80,0xAA,0x29,0x51,0x3D,0xF9,0x66 } },
{ 16 , { 0x37,0x2C,0x66,0xC3,0x75,0xBE,0x44,0xC9,0xB2,0x8E,0xF4,0x6D,0x2C,0x88,0x05,0x79 } },
{ 16 , { 0x37,0x95,0x2A,0x9A,0x8A,0x61,0x8F,0x3F,0xB4,0xA5,0x79,0xAF,0x4B,0x24,0xE4,0x2B } },
{ 9 , { 0x30,0x39,0xD9,0x74,0x2F,0xC7,0x79,0xD3,0x2A } },
{ 16 , { 0x07,0xB5,0x3E,0x34,0xB5,0x7B,0x14,0x6A,0x4F,0xAF,0x4E,0x08,0x96,0xFA,0x42,0x60 } },
{ 12 , { 0x0F,0x63,0x89,0xD5,0xCB,0xBA,0x21,0xFD,0x4B,0x3D,0xD2,0x50 } },
{ 8 , { 0x07,0x30,0x3D,0x14,0xC7,0xB9,0x52,0x58 } },
{ 16 , { 0x3F,0x48,0x8F,0x96,0xBF,0xFD,0xFC,0x84,0x13,0x86,0x69,0xAE,0xE7,0xA6,0x48,0xBE } },
{ 10 , { 0x49,0x5F,0x0F,0x10,0x7F,0x17,0x47,0x7C,0xB8,0xBC } },
{ 16 , { 0x3F,0xE8,0x0D,0xDA,0x16,0x62,0xDD,0x0C,0xA2,0xE5,0x85,0xB6,0xDF,0x0B,0x8E,0x57 } },
{ 16 , { 0x3F,0x8F,0xFD,0xE8,0x98,0xAB,0x8E,0x9C,0x10,0x44,0x17,0xAD,0xF7,0x21,0xE4,0xC9 } },
{ 16 , { 0x37,0xAA,0x88,0x50,0xE0,0x91,0x60,0x0C,0x2F,0x2A,0x16,0xFF,0x39,0x45,0x28,0x55 } },
{ 16 , { 0x3F,0xE2,0x73,0x5E,0x79,0x57,0xBA,0xCF,0xBB,0x57,0xE0,0xC5,0xDD,0x92,0xD1,0x9D } },
{ 16 , { 0x37,0x4A,0x1E,0x1F,0x40,0x07,0x44,0xB5,0x57,0xB0,0x9A,0x35,0xFB,0x57,0xEE,0x3D } },
{ 16 , { 0x3F,0x1F,0x94,0x04,0x23,0xC2,0x8A,0x36,0x40,0x2F,0x89,0x70,0x88,0xDD,0x8E,0x87 } },
{ 16 , { 0x37,0xA5,0xE7,0x97,0xEE,0x66,0x01,0x8E,0x25,0xC2,0xD3,0x93,0x5D,0x2C,0x53,0xDF } },
{ 16 , { 0x37,0xA5,0x01,0x76,0xBE,0xDC,0x33,0xCD,0x38,0xA4,0x3D,0x66,0x91,0xB1,0x07,0xD9 } },
{ 16 , { 0x37,0x09,0xE8,0x0C,0xD5,0x79,0xE8,0xF3,0xC5,0x32,0x97,0x2D,0x01,0xCD,0xC8,0x86 } },
{ 16 , { 0x3F,0x3E,0xCD,0xD0,0x42,0xB0,0x0B,0x42,0x73,0x94,0x0F,0x99,0x63,0x0A,0x00,0xA3 } },
{ 15 , { 0x46,0x7E,0x9A,0x11,0x09,0x2D,0xA5,0x0F,0xBA,0xE8,0xA2,0xFB,0xF6,0xCC,0x70 } },
{ 16 , { 0x37,0xD1,0x49,0x2E,0x23,0x5A,0xC6,0x9C,0xD0,0xCD,0xCC,0xB1,0x5D,0xBD,0xFF,0xD1 } },
{ 10 , { 0x49,0xEF,0x0F,0x53,0x5A,0x64,0x2C,0xDD,0xB5,0xE3 } },
{ 16 , { 0x37,0x04,0x32,0xBC,0x36,0xB8,0x87,0x76,0x8D,0xB9,0xBC,0x61,0x3A,0x51,0x12,0xCC } },
{ 16 , { 0x3F,0x93,0x70,0x6E,0x3C,0xC9,0xD5,0x3F,0xF8,0x23,0x8D,0x4F,0xBA,0x37,0x27,0xB9 } },
{ 16 , { 0x3F,0xF1,0x4C,0xA0,0xBE,0x3F,0xFB,0xCF,0x7E,0x33,0x31,0xA6,0x85,0xB6,0xDF,0xD9 } },
{ 16 , { 0x3F,0x95,0x1B,0x21,0x40,0x7B,0x25,0x78,0x44,0x4C,0xD4,0x17,0x74,0x66,0xBD,0xA4 } },
{ 12 , { 0x3B,0xFA,0x78,0x57,0xD0,0x92,0x82,0xA6,0x21,0x75,0x32,0x3A } },
{ 8 , { 0x07,0x32,0x4C,0xA1,0xFD,0x9D,0x35,0x46 } },
{ 11 , { 0x32,0xB4,0x32,0x7C,0x17,0x54,0x13,0x88,0xAF,0x02,0xE8 } },
{ 14 , { 0x0F,0x8E,0xC1,0x6D,0xE2,0x0D,0xB5,0xA4,0x45,0x49,0xA8,0x63,0xFA,0xBE } },
{ 16 , { 0x0F,0xCC,0x05,0xC6,0x6A,0x3F,0xE1,0x45,0x0F,0x4A,0x58,0xF2,0xE1,0x0E,0x60,0x56 } },
{ 16 , { 0x07,0xDC,0xCD,0xB0,0x8B,0xF2,0x01,0xA9,0x0F,0x80,0x55,0xE3,0x40,0x88,0x16,0xCD } },
{ 14 , { 0x45,0xA3,0x58,0xF9,0x94,0x12,0x0F,0x67,0xAB,0xC7,0xB8,0xC1,0xEE,0x2E } },
{ 16 , { 0x3F,0x7F,0x68,0xEA,0x78,0x8D,0x2A,0x7D,0x02,0x04,0x4D,0x44,0x5D,0xF2,0x01,0x71 } },
{ 16 , { 0x3F,0x6F,0x56,0x06,0xB0,0x34,0xFB,0x35,0xB2,0xD5,0xDF,0xD1,0xBD,0xFA,0xE4,0xF5 } },
{ 16 , { 0x3F,0x1A,0x19,0x23,0x41,0xE6,0x6D,0xFD,0xAE,0xB1,0x37,0xB9,0x00,0x69,0x94,0x03 } },
{ 12 , { 0x33,0x84,0x69,0x6A,0xAC,0xD6,0xD9,0x7A,0xE7,0x40,0xD9,0xDE } },
{ 8 , { 0x0F,0xE2,0xAB,0xC3,0x39,0xC9,0x23,0xB5 } },
{ 14 , { 0x3D,0x9D,0x4C,0xDB,0x36,0x7E,0xE2,0x3B,0x5E,0x1F,0x39,0xA2,0x08,0x93 } },
{ 16 , { 0x07,0xF1,0xB9,0x04,0xAA,0xAF,0x18,0x30,0x0F,0xE5,0xFB,0x4A,0xF8,0x23,0x3C,0xFA } },
{ 16 , { 0x0F,0x06,0xD1,0xD9,0x0D,0xF0,0x6B,0xA5,0x0F,0xB5,0x88,0xB7,0xFB,0x04,0x74,0xF1 } },
{ 8 , { 0x0F,0x6E,0x2B,0x94,0x6A,0x58,0x54,0x3D } },
{ 16 , { 0x3F,0x4D,0x57,0x59,0x90,0xD7,0x4C,0xE7,0x46,0xE5,0xA5,0xDD,0x31,0x10,0xDB,0x53 } },
{ 13 , { 0x4C,0xF5,0x50,0x33,0x5D,0x0F,0x9B,0xAF,0xEC,0xBF,0x91,0xF6,0x7E } },
{ 16 , { 0x0F,0xA2,0xA5,0x63,0xB6,0xFE,0x6C,0x84,0x07,0x63,0x86,0x84,0x63,0x4A,0x54,0x73 } },
{ 16 , { 0x3F,0xAE,0xC5,0xB5,0xA5,0x49,0x03,0x6A,0x52,0xEE,0x67,0x48,0x8A,0x32,0x52,0x99 } },
{ 16 , { 0x3F,0x0F,0x34,0x02,0x0C,0x03,0xED,0x16,0xE9,0x3F,0x17,0xA8,0x08,0xE6,0xE7,0xB2 } },
{ 8 , { 0x07,0xC2,0xAE,0x2A,0x2D,0xB5,0xA9,0xB1 } },
{ 13 , { 0x3C,0xEB,0x57,0x0B,0xBA,0xDC,0x28,0x9B,0x5D,0x23,0x27,0x58,0x4C } },
{ 16 , { 0x07,0xA7,0x4A,0xA5,0x5C,0x74,0x54,0xC1,0x0F,0x9C,0x7E,0x2F,0x3E,0xFA,0x57,0xF0 } },
{ 16 , { 0x37,0xC0,0x45,0xB3,0xAA,0xC0,0x89,0x3A,0x75,0xE3,0x6D,0xFA,0x66,0x83,0xBE,0xE1 } },
{ 10 , { 0x49,0x08,0x0F,0x47,0xA6,0xC8,0x89,0x1C,0x71,0x4E } },
{ 16 , { 0x3F,0x40,0xD7,0xB0,0x56,0x43,0x02,0x94,0xE4,0xA4,0xDC,0xFB,0x51,0xE9,0xF5,0xEE } },
{ 16 , { 0x37,0x38,0xB3,0xA9,0xD2,0xF2,0xDD,0x0B,0xAE,0x17,0x83,0xBF,0x78,0x20,0xD8,0xDF } },
{ 16 , { 0x37,0xD5,0x64,0x71,0x66,0x3B,0xCA,0xD0,0xEB,0x7E,0xE0,0x48,0x7C,0x5E,0x69,0x6D } },
{ 16 , { 0x47,0x07,0x7F,0x6C,0x76,0x1E,0x53,0x56,0x0F,0xE2,0x85,0x5E,0x2E,0xDD,0xEC,0x2A } },
{ 16 , { 0x07,0x96,0xC1,0x3B,0x95,0x33,0x60,0x56,0x0F,0x65,0x32,0xD3,0xA8,0x24,0x06,0xE1 } },
{ 16 , { 0x37,0xF8,0x98,0x76,0x1F,0xB5,0xD0,0x9B,0xB3,0x9A,0x51,0x03,0xA1,0x4C,0x45,0x41 } },
{ 16 , { 0x3F,0xDA,0xAC,0x07,0x9E,0x45,0x62,0x11,0x20,0xD7,0x20,0xB2,0xD4,0x45,0x53,0x95 } },
{ 16 , { 0x3F,0x80,0x2A,0xE8,0xBE,0x21,0x2B,0x98,0xF8,0x1F,0x95,0x05,0x79,0xA5,0x28,0x11 } },
{ 16 , { 0x3F,0x10,0x0F,0x20,0xD6,0xFD,0x20,0xD7,0x40,0x12,0x91,0xA8,0x8D,0x68,0x60,0x39 } },
{ 16 , { 0x3F,0xB8,0x2D,0x10,0x71,0x07,0xE5,0x61,0xA4,0xD5,0xCA,0xC7,0xAC,0x3B,0xA6,0xAB } },
{ 16 , { 0x3F,0x14,0xA8,0xE2,0x35,0x7D,0x93,0x51,0xA8,0xB2,0x84,0x97,0x64,0x86,0x0B,0xFC } },
{ 16 , { 0x3F,0x09,0x16,0x9F,0xEC,0x23,0x39,0xE0,0x7F,0xC5,0xCC,0xE5,0x2E,0x24,0x15,0xF2 } },
{ 16 , { 0x3F,0x83,0x14,0x76,0x08,0xDC,0x91,0xD3,0xC6,0x8B,0x32,0x8B,0x72,0x83,0x6C,0x8E } },
{ 16 , { 0x37,0x5A,0x44,0xCB,0x99,0xEB,0xB2,0x0F,0x4A,0x35,0x29,0xF3,0x30,0x9A,0x10,0x65 } },
{ 16 , { 0x37,0x24,0x58,0xD4,0x23,0x65,0x8A,0x30,0xE2,0xAB,0xF7,0x2C,0xB8,0x14,0x57,0xF8 } },
{ 16 , { 0x37,0x06,0xD7,0xE2,0xA1,0xD3,0x03,0x43,0x2B,0xC6,0xD9,0xBE,0x1C,0x93,0xCA,0x76 } },
{ 16 , { 0x37,0x89,0x07,0x23,0xF1,0x3B,0x76,0xC5,0x42,0xF1,0xFD,0x35,0xD7,0xD8,0xA1,0x08 } },
{ 16 , { 0x37,0x72,0x63,0x7C,0x78,0x75,0x20,0xE5,0xF5,0xB2,0x89,0xC0,0xC4,0x10,0x86,0x4D } },
{ 16 , { 0x37,0xB4,0xE0,0x71,0x7C,0x41,0xE9,0x74,0xB3,0xF6,0xD4,0xCC,0x7F,0xBC,0x94,0xE1 } },
{ 16 , { 0x3F,0xBC,0xEE,0x35,0xF8,0x15,0x3E,0x22,0x7F,0x6D,0x3C,0xD3,0x48,0x0B,0x03,0x64 } },
{ 16 , { 0x3F,0x0F,0x96,0xFE,0x83,0x40,0xB8,0xD1,0xD1,0x3F,0xF4,0xE4,0xC5,0x32,0x4D,0xAA } },
{ 11 , { 0x3A,0x92,0xCB,0x88,0x50,0xBB,0xCB,0xF9,0x2B,0x5F,0x6E } },
{ 16 , { 0x0F,0xBA,0x8B,0x48,0x61,0x22,0x9D,0x4C,0x0F,0x91,0xC6,0x84,0xF6,0x25,0x49,0xFB } },
{ 14 , { 0x35,0x84,0x1E,0xEF,0x9B,0xE8,0xB0,0x29,0x2A,0x3C,0x1C,0x84,0x29,0x85 } },
{ 16 , { 0x07,0x2A,0xD9,0x11,0xFA,0x3B,0x74,0x9B,0x07,0xC9,0x85,0x62,0xE4,0x56,0x01,0x55 } },
{ 16 , { 0x07,0x62,0x17,0xBD,0xBF,0x87,0x01,0xBC,0x0F,0xB5,0xE2,0x6F,0x42,0xD2,0x78,0xA0 } },
{ 16 , { 0x3F,0xB5,0xB8,0x3D,0x38,0x72,0xE1,0x74,0xA6,0x4B,0x09,0x5F,0xA0,0xAE,0x75,0xCA } },
{ 16 , { 0x37,0x74,0x59,0xD4,0x31,0x88,0xEC,0xDE,0x9A,0xB1,0x4E,0x68,0xCA,0x2A,0xCE,0x11 } },
{ 13 , { 0x3C,0x1C,0xE5,0x97,0xD1,0x9F,0x35,0x6E,0x54,0x1F,0x41,0x14,0x37 } },
{ 8 , { 0x07,0x98,0xB7,0xEB,0x06,0x07,0xB7,0x57 } },
{ 16 , { 0x37,0x19,0x71,0x71,0xBD,0x93,0x02,0x57,0xB8,0x68,0xCC,0x53,0x15,0x47,0xC1,0xB9 } },
{ 16 , { 0x3F,0x82,0xB3,0xBC,0x3D,0x4A,0x97,0x71,0xC7,0x0D,0xB3,0x2F,0x8C,0xAF,0x30,0xA9 } },
{ 16 , { 0x3F,0x66,0x90,0xEC,0x01,0x5D,0x6B,0xC7,0x0F,0x3D,0x10,0xEB,0xBF,0x45,0x89,0x78 } },
{ 16 , { 0x3F,0x35,0x3A,0x1B,0x7F,0x08,0x41,0x4D,0x70,0xC1,0xB0,0x60,0x31,0xFE,0x51,0xAB } },
{ 16 , { 0x37,0x18,0x70,0xC0,0xFE,0x30,0x4A,0xDA,0x79,0xBD,0x9A,0x40,0x36,0xAB,0x02,0xCE } },
{ 16 , { 0x37,0x33,0xD7,0x02,0xFD,0xBD,0x5B,0x89,0x5E,0xE2,0x91,0x05,0x8D,0xC2,0xA1,0xEB } },
{ 16 , { 0x37,0x32,0xD6,0x85,0xE8,0x24,0x59,0x40,0x26,0x37,0x9D,0xD0,0x5F,0x9D,0x10,0x14 } },
{ 16 , { 0x37,0x3C,0xDB,0x9B,0x50,0xAE,0x3B,0x27,0x25,0x17,0x02,0x62,0x0D,0x36,0x8F,0x13 } },
{ 16 , { 0x37,0x2A,0x9C,0x49,0xE9,0xDB,0x20,0xDE,0xEB,0xB9,0x3A,0xFB,0xD6,0x53,0x1E,0x71 } },
{ 16 , { 0x37,0xEB,0xB5,0xFA,0xEF,0x69,0x95,0xAD,0xE1,0x83,0x28,0x0F,0xD5,0xB2,0x33,0x68 } },
{ 16 , { 0x37,0x94,0x08,0x4E,0xC4,0x2C,0x68,0x4C,0xF1,0x95,0xE8,0x84,0xB4,0xA4,0xC3,0xEB } },
{ 9 , { 0x30,0xFB,0x88,0x76,0x39,0x13,0x40,0x07,0x16 } },
{ 8 , { 0x0F,0xE8,0x8E,0x73,0xBA,0x23,0x8F,0xFE } },
{ 16 , { 0x3F,0x27,0xF5,0x60,0x3D,0xDF,0xF8,0x4C,0x5B,0xDF,0xB6,0xC6,0x19,0x56,0x56,0x35 } },
{ 16 , { 0x37,0x23,0x69,0xF6,0x84,0xC5,0x53,0x1C,0xF4,0x00,0xBB,0xD1,0xA2,0x8C,0x0A,0x43 } },
{ 11 , { 0x42,0x03,0x41,0x0F,0x41,0xD2,0x9A,0xBA,0xFF,0x9B,0x2F } },
{ 12 , { 0x33,0x00,0x4B,0xDA,0x2F,0xED,0x82,0xE4,0xAE,0xFB,0xA4,0x47 } },
{ 8 , { 0x0F,0x40,0xB4,0xA9,0xA1,0x0C,0x06,0xD3 } },
{ 16 , { 0x37,0x4E,0xEB,0xB6,0x96,0x45,0x48,0xF8,0x46,0x03,0xD7,0x30,0x6E,0xD8,0x62,0xDB } },
{ 16 , { 0x3F,0xBA,0x5E,0xC5,0xA1,0xD1,0xE3,0x2C,0xCA,0xA8,0xE6,0xEE,0x56,0x31,0x0C,0xAE } },
{ 16 , { 0x37,0xC0,0xBD,0xA1,0xF1,0x93,0xEB,0x58,0x59,0x3F,0x7F,0x97,0x75,0x36,0x43,0x8D } },
{ 16 , { 0x3F,0xE8,0xDE,0x65,0xBA,0x93,0x92,0xA9,0x1F,0x12,0x9E,0x7D,0x1A,0x21,0xC2,0xA3 } },
{ 16 , { 0x37,0x6A,0xA6,0x72,0x13,0x7D,0x4B,0x2C,0xE3,0xFD,0xFB,0x1F,0xF8,0xC0,0x09,0x58 } },
{ 16 , { 0x37,0xB5,0x8F,0x76,0x26,0xD4,0xE3,0xF5,0x3B,0xBD,0x3F,0xC4,0x16,0x94,0xC2,0x30 } },
{ 15 , { 0x4E,0xC4,0xBD,0xFE,0x1D,0xE0,0x82,0x0F,0xC2,0x31,0x50,0xA7,0xF7,0x8F,0x1E } },
{ 9 , { 0x30,0xFB,0xEA,0xD2,0xC2,0x09,0x77,0x37,0x7C } },
{ 16 , { 0x0F,0xC1,0xDF,0x9A,0x69,0x31,0x09,0xF9,0x0F,0x6D,0xBD,0x48,0x11,0x5F,0x4E,0xD0 } },
{ 13 , { 0x05,0xBB,0x37,0xA6,0xF5,0x1C,0x44,0x63,0x44,0xA4,0xBE,0xBB,0x23 } },
{ 16 , { 0x07,0x48,0xBD,0xED,0x85,0x51,0x5E,0xF5,0x05,0x3E,0x6C,0x70,0xE3,0xE5,0xCC,0x72 } },
{ 16 , { 0x3F,0xB3,0x8B,0x9C,0xD0,0x01,0x19,0x6E,0x1F,0x51,0x50,0xF8,0xCB,0xE2,0xCD,0xDB } },
{ 16 , { 0x37,0xEC,0x6F,0xC0,0x2B,0x75,0x67,0x86,0x2E,0xFF,0x36,0x29,0x09,0xC9,0x82,0x16 } },
{ 12 , { 0x43,0xA9,0x8A,0x67,0x07,0x44,0x0B,0x59,0x52,0xBB,0x35,0x4E } },
{ 16 , { 0x0F,0x49,0x72,0x22,0xFB,0xE3,0x1D,0xBC,0x05,0xCE,0x89,0x7B,0xF6,0x10,0x3D,0x0B } },
{ 12 , { 0x43,0x8D,0xDD,0xAD,0x07,0xCF,0x5C,0x3D,0x18,0xE8,0x2B,0xF5 } },
{ 16 , { 0x0F,0x57,0x2B,0x34,0x14,0x1B,0x13,0xCF,0x07,0x5D,0x72,0x7A,0xA7,0x7D,0x8F,0xB6 } },
{ 16 , { 0x07,0x9D,0x94,0x33,0x15,0x71,0x7D,0x30,0x0F,0xBF,0xF6,0x6C,0x1B,0xFD,0x69,0x92 } },
{ 16 , { 0x07,0x88,0x8B,0xB3,0x47,0x6D,0x02,0x31,0x05,0xCC,0x6E,0xB1,0x76,0x17,0x07,0xAD } },
{ 14 , { 0x45,0xFC,0xD6,0x1B,0x81,0xC2,0x0F,0xC1,0x61,0x97,0xF7,0x70,0x42,0x34 } },
{ 8 , { 0x05,0xAD,0x9A,0x78,0xCF,0x7F,0x0A,0x17 } }
};

#define FIRMWARE_LINES_3_1b3 (sizeof(Si2177_FW_3_1b3)/(sizeof(firmware_struct)))
#define RAM_SIG_3_1b3 0xCA7B1D86
#define RAM_CRC_3_1b3 0xAEC0

#endif /* _SI2177_FIRMWARE_3_1_BUILD_3_H_ */
