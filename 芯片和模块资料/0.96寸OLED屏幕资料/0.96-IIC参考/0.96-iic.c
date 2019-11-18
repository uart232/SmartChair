//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <at89x51.h>
//#include <reg52.h>
#include <intrins.h>



#define Uchar unsigned char
#define Uint  unsigned int
#define Ulong unsigned long
#define uchar unsigned char
#define uint  unsigned int


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//  Pin Definition
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


//0.66bule
#define RES3	P3_0				// Reset   
#define SCL3	P3_1				// Serial Clock Input
#define SDA3	P3_2				// Serial Data Input


code color13[]={
/*------------------------------------------------------------------------------
;  源文件 / 文字 : C:\Documents and Settings\Administrator\桌面\新建文件夹 (2)\logo.bmp字模
;  宽×高（像素）: 128×64
------------------------------------------------------------------------------*/
//0x80,0x40,0x10,//宽的像素数,高的像素数，宽的字节数，参数设置可选
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x20,0x44,0x08,0x00,0x18,0x48,0x28,0xC8,0x08,0x28,0x48,0x18,0x00,
0x40,0x40,0xFC,0x40,0x40,0xFC,0x00,0x00,0xF8,0x00,0x00,0xFC,0x00,0x40,0x40,0xA0,
0x90,0x88,0x84,0x88,0x90,0x20,0x40,0x40,0x00,0x00,0x40,0x44,0xD8,0x20,0xF0,0xAC,
0xA8,0xE8,0xB8,0xA8,0xE0,0x00,0x00,0x00,0xC0,0x7C,0x54,0x54,0x54,0x54,0x54,0x54,
0x7C,0x40,0x40,0x00,0x00,0xF0,0x90,0x90,0x90,0xFC,0x90,0x90,0x90,0xF0,0x00,0x00,
0x00,0x80,0x88,0x88,0x88,0x88,0x88,0xE8,0xA8,0x98,0x8C,0x88,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x04,0x3E,0x01,0x10,0x11,0x09,0x05,0x3F,0x05,0x09,0x11,0x11,0x00,
0x08,0x18,0x0F,0x24,0x14,0x0F,0x00,0x00,0x0F,0x00,0x00,0x3F,0x00,0x20,0x22,0x2A,
0x32,0x22,0x3F,0x22,0x32,0x2A,0x22,0x20,0x00,0x00,0x20,0x10,0x0F,0x10,0x28,0x24,
0x23,0x20,0x2F,0x28,0x2A,0x2C,0x00,0x30,0x0F,0x04,0x3D,0x25,0x15,0x15,0x0D,0x15,
0x2D,0x24,0x24,0x00,0x00,0x07,0x04,0x04,0x04,0x1F,0x24,0x24,0x24,0x27,0x20,0x38,
0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x81,0x41,0x21,0x21,0x61,0x01,0x01,0x21,0xE1,0xE1,0x01,0xE1,0xE1,
0x21,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x21,0xE1,0x21,0x21,0x21,0x61,0x01,0x01,
0x21,0x21,0xE1,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0xC1,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x21,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0F,0x10,0x20,0x24,0x1C,0x04,0x00,0x20,0x3F,0x01,0x3E,0x01,0x3F,
0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x22,0x22,0x27,0x30,0x00,0x00,
0x20,0x20,0x3F,0x20,0x20,0x00,0x00,0x1E,0x25,0x25,0x25,0x16,0x00,0x00,0x1E,0x21,
0x21,0x21,0x13,0x00,0x01,0x01,0x1F,0x21,0x21,0x00,0x00,0x00,0x21,0x3F,0x22,0x21,
0x01,0x00,0x00,0x1E,0x21,0x21,0x21,0x1E,0x00,0x21,0x3F,0x22,0x01,0x01,0x3E,0x20,
0x00,0x21,0x21,0x3F,0x20,0x20,0x00,0x00,0x1E,0x21,0x21,0x21,0x13,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xF0,0x08,0x04,0x04,0x04,0x0C,0x00,0xF0,0x08,0x04,0x04,0x08,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xFC,0x04,0x00,
0x00,0x00,0x00,0x00,0x0C,0x04,0xFC,0x04,0x0C,0x00,0x04,0xFC,0x04,0x04,0x08,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x81,0x82,0x84,0x84,0x84,0x82,0x80,0x81,0x82,0x84,0x84,0x82,0x81,
0x80,0x80,0x86,0x86,0x80,0x80,0x80,0x80,0x80,0x85,0x83,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x84,0x87,0x84,0x84,
0x84,0x86,0x80,0x80,0x80,0x84,0x87,0x84,0x80,0x80,0x84,0x87,0x84,0x84,0x82,0x81,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,
};

code color14[]={
/*--  调入了一幅图像：F:\工作\8051\OLED1\abcd.bmp  --*/
/*--  宽度x高度=128x64  --*/
0x00,0x00,0x00,0xF0,0x08,0x04,0x04,0x08,0xF0,0x00,0x04,0xFC,0x04,0x00,0x00,0x00,
0x00,0x04,0xFC,0x44,0x44,0xE4,0x0C,0x00,0x04,0xFC,0x04,0x04,0x08,0xF0,0x00,0xA8,
0xAE,0x98,0xFF,0xAC,0x8A,0x10,0xFC,0x0B,0x88,0x78,0x08,0x00,0x88,0x86,0x92,0x92,
0x92,0x92,0xD3,0xB2,0x92,0x82,0x8A,0x86,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x82,0xF2,0x92,0x97,0x92,0xFA,0x92,0x97,0xF2,
0x82,0x82,0x00,0x04,0x04,0x04,0x1C,0x64,0x85,0x06,0xC4,0x3C,0x04,0x04,0x04,0x00,
0x00,0x80,0x3E,0x2A,0xEA,0x2A,0x2A,0xEA,0x2A,0x3F,0x82,0x00,0x00,0x00,0x10,0x12,
0xD2,0x12,0x12,0xF2,0x12,0x52,0x93,0x1A,0x10,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xC2,0x04,0xC4,0x02,0x81,0x40,0x44,0x47,0x84,0x04,0x04,0x06,
0x00,0x04,0x07,0x04,0x04,0x84,0xC6,0x00,0x04,0x07,0x84,0x44,0x42,0x41,0x80,0x08,
0x88,0x45,0x42,0x42,0x85,0x08,0x04,0x03,0x82,0xC4,0x08,0x00,0xC0,0x40,0x40,0x40,
0x40,0x08,0x8F,0x40,0x40,0xC0,0x00,0x00,0xC0,0x40,0x41,0xC2,0x46,0x00,0x80,0x40,
0x40,0x40,0x80,0x00,0x80,0x40,0x48,0x48,0x88,0x04,0x82,0x41,0x40,0x41,0x82,0x04,
0x08,0x08,0x00,0x08,0x08,0x08,0x44,0xC4,0x02,0x01,0x02,0x04,0x04,0x08,0x08,0x00,
0x08,0x08,0x09,0x0A,0x0F,0x48,0xC8,0x0F,0x0A,0x09,0xCC,0x08,0x00,0x04,0x42,0xC1,
0x40,0x40,0x88,0x0F,0x80,0x40,0x40,0x41,0xC6,0x00,0x40,0xC6,0x46,0x40,0x80,0x00,
0x00,0x00,0x09,0x3D,0x0B,0x3D,0x0B,0x09,0x03,0x34,0x24,0x24,0x1F,0x00,0x00,0x00,
0x21,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x31,0x28,0x24,0x22,0x21,0x00,
0x10,0x20,0x22,0x22,0x1D,0x00,0x04,0x0B,0x08,0x3F,0x28,0x00,0x13,0x22,0x22,0x22,
0x1C,0x00,0x1F,0x22,0x22,0x22,0x1C,0x00,0x00,0x00,0x3E,0x01,0x00,0x00,0x1D,0x22,
0x22,0x22,0x1D,0x00,0x03,0x34,0x24,0x24,0x1F,0x00,0x1F,0x20,0x20,0x20,0x1F,0x00,
0x00,0x14,0x2A,0x2A,0x3C,0x20,0x00,0x3F,0x22,0x22,0x1C,0x00,0x00,0x1C,0x22,0x22,
0x26,0x00,0x00,0x1C,0x22,0x22,0x3F,0x20,0x20,0x3E,0x09,0x0F,0x38,0x20,0x20,0x3F,
0x22,0x22,0x1D,0x00,0x1F,0x20,0x20,0x20,0x10,0x00,0x20,0x3F,0x20,0x20,0x1F,0x00,
0x00,0x00,0x88,0xE8,0x9E,0xC8,0xBE,0x88,0x00,0x00,0x00,0x04,0xFE,0x00,0x00,0x00,
0x00,0xFC,0x02,0x02,0x02,0xFC,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,
0x04,0xFE,0x00,0x00,0x00,0x00,0x0C,0x82,0x42,0x22,0x1C,0x00,0x00,0x04,0x02,0x12,
0x12,0xEC,0x00,0x40,0xB0,0x88,0x84,0xFE,0x00,0x00,0x00,0xBE,0x12,0x12,0x12,0xE2,
0x00,0x00,0xF8,0x24,0x12,0x12,0xE6,0x00,0x00,0x20,0x90,0x50,0x50,0xE0,0x00,0x02,
0xFE,0x10,0x10,0x10,0xE0,0x00,0x00,0xE0,0x10,0x10,0x10,0x30,0x00,0x00,0xE0,0x10,
0x10,0x12,0xFE,0x00,0x00,0x80,0x78,0x46,0x78,0x80,0x00,0x02,0xFE,0x12,0x12,0x12,
0xEC,0x00,0xF8,0x04,0x02,0x02,0x02,0x06,0x00,0x02,0xFE,0x02,0x02,0x04,0xF8,0x00,
0x40,0xC0,0x78,0x43,0xC0,0x7B,0x40,0x00,0x00,0x10,0x10,0xFA,0x03,0x02,0x00,0x00,
0x00,0x71,0x0A,0x0A,0x0A,0x89,0x70,0x00,0x00,0x03,0x03,0xC0,0xC0,0x00,0x00,0x00,
0x02,0x13,0x12,0xF8,0x00,0x00,0x03,0x02,0x02,0x72,0x0A,0x08,0x08,0x89,0x72,0x02,
0x02,0x31,0x08,0x88,0x88,0x48,0x32,0x03,0x02,0x00,0xC0,0x21,0x12,0xFA,0x02,0x01,
0x00,0xF8,0x09,0x8A,0x8A,0x0A,0x09,0x00,0x00,0xE1,0x12,0x8A,0x8A,0x1B,0x02,0x00,
0x03,0x02,0x82,0x82,0x81,0x80,0x00,0x01,0x0A,0xFA,0x02,0x81,0x80,0x00,0x01,0x02,
0x02,0x02,0x03,0x82,0x82,0x83,0x02,0x00,0x02,0x03,0xC2,0x3A,0xE3,0x02,0x02,0x02,
0x09,0xF8,0x88,0x89,0x8A,0x72,0x02,0x01,0xC0,0x32,0x0B,0x0A,0x0A,0x09,0x38,0x00,
0x04,0x3F,0x04,0x04,0x3F,0x04,0x04,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,
0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,
0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,
0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00,0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00,
0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00,0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00,
0x00,0x19,0x24,0x22,0x22,0x22,0x3F,0x20,0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00,
0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00,0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20,
0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00,
0x10,0x90,0xFE,0x10,0x10,0x90,0xFE,0x10,0x00,0x00,0x00,0x04,0x04,0xFE,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC0,0x30,0x08,0x04,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xFE,0x00,0x00,0x00,0x00,
0x00,0x00,0x1C,0x02,0x02,0x02,0x02,0xC2,0x3C,0x00,0x00,0x00,0x1C,0x02,0x42,0x42,
0x62,0x9C,0x00,0x00,0x00,0x00,0x80,0x40,0x40,0x40,0x40,0x40,0x80,0x00,0x00,0x00,
0x02,0xFE,0x80,0x40,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x80,0x40,0x40,0x40,0x80,
0x00,0x00,0x00,0x00,0x00,0x80,0x78,0x06,0x78,0x80,0x00,0x00,0x00,0x00,0x02,0xFE,
0x42,0x42,0x42,0x62,0x9C,0x00,0x00,0x00,0xF0,0x08,0x04,0x02,0x02,0x02,0x04,0x0E,
0x04,0x3F,0x04,0x04,0x04,0x3F,0x04,0x04,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,
0x00,0x00,0x00,0x00,0x03,0x02,0x02,0x22,0x22,0x3F,0x22,0x22,0x00,0x00,0x00,0x00,
0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,
0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x20,0x38,0x00,0x00,0x00,0x1C,0x20,0x20,0x20,
0x20,0x10,0x0F,0x00,0x00,0x00,0x19,0x24,0x24,0x22,0x22,0x22,0x3F,0x20,0x30,0x00,
0x00,0x3F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00,0x00,0x0F,0x10,0x20,0x20,0x20,0x11,
0x08,0x00,0x00,0x20,0x38,0x27,0x02,0x02,0x02,0x27,0x38,0x20,0x00,0x00,0x20,0x3F,
0x20,0x20,0x20,0x20,0x10,0x0F,0x00,0x00,0x07,0x18,0x20,0x20,0x20,0x20,0x10,0x0C,
};

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

void 	delay_ms(Uint t)
{
	Uchar i,j;
	while(--t)
	{
	i=50;	
	j=100;

		while(--j)
			while(--i);
	}
}
void uDelay(Uchar l)
{
	while(l--);
}


void Delay(Uchar n)
{
Uchar i,j,k;

	for(k=0;k<n;k++)
	{
		for(i=0;i<131;i++)
		{
			for(j=0;j<15;j++)
			{
				uDelay(203);	
			}
		}
	}
}


//****************************************************************************
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//  Read/Write Sequence
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
void I2C_3(Uchar mcmd)
{
Uchar length = 8;			// Send Command

	while(length--)
	{
		if(mcmd & 0x80)
		{
			SDA3=1;
		}
		else
		{
			SDA3=0;
		}
//		uDelay(3);
		SCL3=1;
//		uDelay(3);
		SCL3=0;
//		uDelay(3);
		mcmd = mcmd << 1;
	}
}


void I2C_Ack3()
{
	SDA3=1;
//	uDelay(3);
	SCL3=1;
//	uDelay(3);
	SCL3=0;
//	uDelay(3);
}


void I2C_NAck3()
{
	SDA3=0;
//	uDelay(3);
	SCL3=1;
//	uDelay(3);
	SCL3=0;
//	uDelay(3);
}


void I2C_Start3()
{
	SDA3=0;
//	uDelay(3);
	SCL3=1;
//	uDelay(3);
	SCL3=0;
//	uDelay(3);
	I2C_3(0x78);
	I2C_Ack3();
}


void I2C_Stop3()
{
	SCL3=1;
//	uDelay(5);
	SDA3=0;
//	uDelay(5);
	SDA3=1;
//	uDelay(5);
}


void Write_Command3(Uchar Data)
{
	I2C_Start3();
	I2C_3(0x00);
	I2C_Ack3();
	I2C_3(Data);
	I2C_Ack3();
	I2C_Stop3();
}


void Write_Data3(Uchar Data)
{
	I2C_Start3();
	I2C_3(0x40);
	I2C_Ack3();
	I2C_3(Data);
	I2C_Ack3();
	I2C_Stop3();
}
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

void	LCD_Init3(void)
{
RES3=0;
//uDelay(2);
RES3=1;
//internal setting


Write_Command3(0xae);	//--turn off oled panel

Write_Command3(0x00);	//--set low column address
Write_Command3(0x10);	//--set high column address

Write_Command3(0x40);	//--set start line address

Write_Command3(0xb0);	//--set page address

Write_Command3(0x81);	//--set contrast control register
Write_Command3(0xff);

Write_Command3(0xa1);	//--set segment re-map 127 to 0   a0:0 to seg127
Write_Command3(0xa6);	//--set normal display

Write_Command3(0xc9);	//--set com(N-1)to com0  c0:com0 to com(N-1)

Write_Command3(0xa8);	//--set multiples ratio(1to64)
Write_Command3(0x3f);	//--1/64 duty

Write_Command3(0xd3);	//--set display offset
Write_Command3(0x00);	//--not offset

Write_Command3(0xd5);	//--set display clock divide ratio/oscillator frequency
Write_Command3(0x80);	//--set divide ratio

Write_Command3(0xd9);	//--set pre-charge period
Write_Command3(0xf1);

Write_Command3(0xda);	//--set com pins hardware configuration
Write_Command3(0x12);

Write_Command3(0xdb);	//--set vcomh
Write_Command3(0x40);

Write_Command3(0x8d);	//--set chare pump enable/disable
Write_Command3(0x14);	//--set(0x10) disable
//Write_Command3(0x10);	//--set(0x10) disable
Write_Command3(0xaf);	//--turn on oled panel
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=void 	LCD_Init(void)
}


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
void pic13(void)
{
	Uchar i,j;
	Uint k;
	k=0;
	for(j=0;j<8;j++)
	{
		Write_Command3(0x22);//--set page1
		Write_Command3(j);//--set start page
		Write_Command3(0x07);//--set end page

 		for(i=0;i<128;i++)		  				//显示单色数据到LCD
		{
			Write_Data3(color13[k]);
			k=k+1;
		
		}
	}
}


void pic14(void)
{
	Uchar i,j;
	Uint k;
	k=0;
	for(j=0;j<8;j++)
	{
		Write_Command3(0x22);//--set page1
		Write_Command3(j);//--set start page
		Write_Command3(0x07);//--set end page

 		for(i=0;i<128;i++)		  				//显示单色数据到LCD
		{
			Write_Data3(color14[k]);
			k=k+1;
		
		}
	}
}
			
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
void main()
{

	LCD_Init3();

	while(1)

	{   
		pic13();
		delay_ms(10);
		pic14();
		delay_ms(10);

	}
}
