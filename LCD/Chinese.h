// ------------------  汉字字模数据结构体定义 ------------------------ //
const struct  hz16_tab                 //结构体名hz16_tab
{
       
       unsigned char   hz16[32];      //每个16x16汉字为16x16/8=32字节 
	     unsigned char   GBK[2];        //编译器在编译汉字时会编译成GBK码,每个汉字为两字节,例如"北"字内码为0xb1b1.
} ch16[] =                            //数据表 
{
	
0X00,0X01,0X00,0X06,0X7F,0XF8,0X41,0X00,0X49,0X00,0X49,0X78,0X49,0X48,0X7F,0X48,
	0X49,0X48,0X49,0X78,0X49,0X02,0X41,0X01,0X7F,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,"周",
0X00,0X11,0X20,0X12,0XFF,0XF4,0X24,0X90,0X24,0X90,0X24,0X98,0XFF,0XF5,0X20,0X12,
	0X00,0X0C,0X7F,0XF0,0X44,0X40,0X44,0X42,0X44,0X41,0X7F,0XFE,0X00,0X00,0X00,0X00,"期",

0X00,0X80,0X40,0X80,0X40,0X80,0X48,0X80,0X46,0X80,0X40,0X80,0X40,0X80,0X7F,0XFF,0X40,
	0X80,0X40,0X80,0X42,0X80,0X4C,0X80,0X40,0X80,0X40,0X80,0X00,0X80,0X00,0X00,"平",
0X04,0X08,0X04,0X0C,0X04,0X08,0XFF,0XF0,0X04,0X10,0X04,0X10,0X04,0X00,0X08,0X08,0X32,
	0X08,0XD1,0X90,0X10,0X22,0X10,0X41,0X10,0X02,0X1F,0XFC,0X00,0X00,0X00,0X00,"均",

0x02,0x00,0x02,0x02,0x42,0x04,0x33,0xF8,0x00,0x04,0x00,0x1A,0x3F,0xE2,0x24,0x0A,0x25,
	0x12,0x24,0xA2,0x44,0x42,0x44,0xA2,0xC5,0x12,0x46,0x0A,0x00,0x02,0x00,0x00,"返",
0x00,0x00,0x00,0x00,0x7F,0xFE,0x40,0x04,0x40,0x04,0x4F,0xE4,0x48,0x24,0x48,0x24,0x48,
	0x24,0x4F,0xE4,0x40,0x04,0x40,0x04,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,"回",	
	
0x00,0x40,0x04,0x41,0x04,0x81,0x15,0x09,0x36,0x49,0x54,0x52,0x9C,0x92,0x14,0xA2,0x15,
	0x24,0x54,0x44,0x36,0x08,0x15,0x10,0x04,0x80,0x04,0x40,0x00,0x40,0x00,0x00,"参",


0X02,0X00,0X02,0X00,0X42,0X00,0X33,0XFC,0X00,0X09,0X02,0X11,0X05,0X02,0X79,0XC2,0X41,
0X34,0X41,0X08,0X41,0X14,0X79,0X62,0X05,0X82,0X04,0X01,0X04,0X01,0X00,0X00,"设",
0X00,0X02,0XE8,0X02,0XA8,0X02,0XAB,0XFE,0XAA,0XAA,0XEA,0XAA,0XAA,0XAA,0XBE,0XAA,0XAA,
0XAA,0XEA,0XAA,0XAA,0XAA,0XAB,0XFE,0XA8,0X02,0XE8,0X02,0X00,0X02,0X00,0X00,"置",

0X00,0X02,0X00,0X02,0X00,0X02,0X00,0X02,0X00,0X02,0X00,0X02,0XFF,0XFE,0X02,0X02,0X02,
0X02,0X02,0X02,0X02,0X02,0X02,0X02,0X02,0X02,0X00,0X02,0X00,0X02,0X00,0X00,"上",
0X40,0X00,0X40,0X00,0X40,0X00,0X40,0X00,0X40,0X00,0X40,0X00,0X7F,0XFF,0X40,0X00,0X40,
0X00,0X42,0X00,0X41,0X00,0X40,0X80,0X40,0X60,0X40,0X00,0X40,0X00,0X00,0X00,"下",
0X00,0X00,0X7F,0XFF,0X44,0X20,0X5A,0X10,0X61,0XE0,0X00,0X00,0X7F,0XFF,0X49,0X02,0X49,
0X04,0X49,0XC0,0X49,0X30,0X49,0X28,0X7F,0X44,0X00,0X82,0X00,0X02,0X00,0X00,"限",

0X02,0X01,0X02,0X09,0X02,0X11,0X3E,0X62,0X02,0X02,0X02,0X02,0X02,0X04,0XFF,0XF4,0X22,
0X08,0X22,0X08,0X22,0X10,0X22,0X20,0X22,0X40,0X02,0X00,0X02,0X00,0X00,0X00,"步",
0X02,0X00,0X02,0X02,0X42,0X04,0X33,0XF8,0X00,0X04,0X01,0X02,0X11,0X0A,0X11,0X32,0XFF,
0XC2,0X11,0X02,0X11,0X02,0XFF,0XFA,0X11,0X02,0X11,0X02,0X01,0X02,0X00,0X00,"进",

0x20,0x40,0x21,0x80,0x27,0xFE,0x3A,0x08,0x22,0x08,0x23,0xFC,0x04,0x01,0x08,0x06,0x17,
0xF8,0xE4,0x90,0x24,0x90,0x27,0xFC,0x2C,0x92,0x34,0x91,0x07,0xFE,0x00,0x00,"确",
0x02,0x00,0x02,0x00,0x42,0x00,0x33,0xFC,0x00,0x09,0x00,0x12,0x00,0x04,0x00,0x18,0x00,
0xE0,0xFF,0x00,0x00,0xE0,0x00,0x18,0x00,0x04,0x00,0x02,0x00,0x01,0x00,0x00,"认",

//0x00,0x00,0x00,0x00,0x1F,0xF8,0x11,0x10,0x11,0x10,0x11,0x10,0x11,0x10,0xFF,0xFE,0x11,
//0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x1F,0xF9,0x00,0x01,0x00,0x0F,0x00,0x00,"电",
0x08,0x20,0x08,0xC0,0x0B,0x00,0xFF,0xFF,0x09,0x00,0x08,0xC1,0x00,0x06,0x7F,0xF8,0x40,
0x00,0x40,0x00,0x40,0x00,0x7F,0xFC,0x00,0x02,0x00,0x02,0x00,0x1E,0x00,0x00,"机",
0x00,0x00,0x1F,0xFF,0x80,0x00,0x44,0x10,0x04,0x20,0x44,0x40,0x44,0x88,0x45,0x04,0x5F,
0xF8,0x44,0x00,0x44,0x00,0x44,0x02,0x40,0x01,0x7F,0xFE,0x00,0x00,0x00,0x00,"闭",
0x20,0x04,0x21,0x06,0x21,0x04,0x3F,0xF8,0x21,0x08,0x21,0x08,0x00,0x20,0x20,0x40,0x20,
0x80,0x21,0x00,0x27,0xFF,0x38,0x00,0x21,0x00,0x20,0x80,0x20,0x60,0x00,0x00,"环",
0x02,0x00,0x42,0x00,0x33,0xFC,0x00,0x08,0x00,0x11,0x7F,0xFE,0x41,0x00,0x49,0x78,0x49,
0x48,0x7F,0x48,0x49,0x48,0x49,0x7A,0x41,0x01,0x7F,0xFE,0x00,0x00,0x00,0x00,"调",
0x02,0x00,0x02,0x02,0x42,0x04,0x33,0xF8,0x00,0x04,0x20,0x12,0x2F,0x22,0x29,0x42,0x29,
0x82,0xFF,0xFA,0x29,0x82,0x29,0x42,0x2F,0x22,0x20,0x12,0x00,0x02,0x00,0x00,"速",
0x00,0x00,0x00,0x42,0x44,0x44,0x4C,0xC8,0x54,0xD0,0x65,0x42,0x45,0x41,0x46,0x7E,0x84,
0x40,0x88,0x40,0x90,0x50,0x81,0x48,0x80,0xC4,0x00,0x62,0x00,0x00,0x00,0x00,"系",
0x04,0x44,0x0C,0xE6,0x35,0x44,0xC6,0x48,0x0C,0x48,0x00,0x01,0x11,0x02,0x13,0x0C,0x15,
0xF0,0x99,0x00,0x71,0x00,0x11,0xFC,0x15,0x02,0x13,0x02,0x11,0x8E,0x00,0x00,"统",
0x00,0x02,0x20,0x02,0x20,0x02,0x2F,0xFE,0x29,0x52,0x29,0x52,0x29,0x52,0xF9,0x52,0x29,
0x52,0x29,0x52,0x29,0x52,0x2F,0xFE,0x20,0x02,0x20,0x02,0x00,0x02,0x00,0x00,"直",







0x02,0x00,0x02,0x00,0x42,0x00,0x33,0xFE,0x00,0x04,0x00,0x08,0xFE,0xFF,0x24,0x92,
0x29,0x92,0x02,0x92,0xFC,0x92,0x12,0x92,0x22,0x92,0x42,0xFF,0x0E,0x00,0x00,0x00,"谐",
/* (16 X 16 , 宋体 ) */

0x08,0x20,0x06,0x20,0x40,0x3E,0x30,0xC0,0x03,0x01,0x00,0x06,0x1F,0xF8,0x11,0x01,
0x11,0xC2,0x11,0x34,0xFF,0x08,0x11,0x14,0x11,0x62,0x15,0x81,0x18,0x01,0x00,0x00,"波",
/* (16 X 16 , 宋体 ) */

0x02,0x00,0x02,0x00,0x04,0x00,0x04,0x3F,0x09,0x22,0x11,0x22,0x29,0x22,0xC7,0x22,
0x21,0x62,0x11,0xA2,0x09,0x22,0x04,0x3F,0x04,0x00,0x02,0x00,0x02,0x00,0x00,0x00,"含",
/* (16 X 16 , 宋体 ) */

0x20,0x20,0x20,0x40,0x20,0x80,0x21,0x00,0x27,0xFF,0x3C,0x90,0xE4,0x90,0x24,0x90,
0x24,0x90,0x24,0x92,0x24,0x91,0x27,0xFE,0x20,0x00,0x20,0x00,0x20,0x00,0x00,0x00,"有",
/* (16 X 16 , 宋体 ) */

0x00,0x10,0x28,0x90,0x25,0x10,0x22,0x10,0x24,0x90,0x2C,0x90,0xB5,0x90,0x66,0xBF,
0x24,0x90,0x29,0x90,0x20,0xD0,0x22,0x10,0x25,0x10,0x28,0x90,0x00,0x10,0x00,0x00,"率",
/* (16 X 16 , 宋体 ) */

0x11,0x02,0x12,0x04,0x14,0x88,0x90,0x50,0x50,0x20,0x14,0xD0,0x12,0x0C,0x11,0x01,
0x01,0x02,0x0E,0x04,0xF1,0xC8,0x10,0x30,0x10,0xCC,0x1F,0x02,0x10,0x01,0x00,0x00,"效",
/* (16 X 16 , 宋体 ) */

0x00,0x80,0x01,0x00,0x06,0x00,0x1F,0xFF,0xE0,0x02,0x20,0x02,0x27,0xFE,0x25,0x52,
0x25,0x52,0xFD,0x52,0x25,0x52,0x25,0x52,0x27,0xFE,0x20,0x02,0x00,0x02,0x00,0x00,"值",
/* (16 X 16 , 宋体 ) */


0x00,0x00,0x00,0x00,0x1F,0xF8,0x11,0x10,0x11,0x10,0x11,0x10,0x11,0x10,0xFF,0xFE,
0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x1F,0xF9,0x00,0x01,0x00,0x0F,0x00,0x00,"电",
/* (16 X 16 , 宋体 ) */

0x00,0x01,0x00,0x06,0x7F,0xF8,0x40,0x02,0x41,0x02,0x41,0x02,0x41,0x02,0x41,0x02,
0x5F,0xFE,0x41,0x02,0x41,0x02,0x41,0x22,0x41,0x1A,0x41,0x02,0x40,0x02,0x00,0x00,"压",
/* (16 X 16 , 宋体 ) */

0x08,0x20,0x06,0x20,0x40,0x7E,0x31,0x80,0x00,0x01,0x22,0x02,0x26,0x7C,0x2A,0x00,
0xB2,0x00,0x62,0x7F,0x22,0x00,0x2A,0x00,0x26,0x7E,0x23,0x01,0x20,0x07,0x00,0x00,"流",
/* (16 X 16 , 宋体 ) */

0x02,0x09,0x3E,0x71,0x02,0x02,0xFE,0xF2,0x12,0x04,0x12,0x78,0x02,0x01,0x4F,0xF2,
0x48,0x04,0x58,0x18,0x6B,0xE0,0x48,0x08,0x48,0x04,0x4F,0xF2,0x40,0x01,0x00,0x00,"频",
/* (16 X 16 , 宋体 ) */

0x02,0x00,0x42,0x00,0x33,0xFE,0x00,0x04,0x02,0x08,0x2A,0x00,0xA6,0xFF,0x62,0x92,0x3E,
0x92,0x22,0x92,0x3E,0x92,0x62,0x92,0xA6,0xFF,0x2A,0x00,0x02,0x00,0x00,0x00,"谱",

0x10,0x08,0x10,0x0C,0x10,0x08,0x1F,0xF8,0x10,0x10,0x10,0x11,0x10,0x12,0x08,0x0C,
0x08,0x70,0xFF,0x80,0x08,0x02,0x08,0x01,0x08,0x02,0x0F,0xFC,0x00,0x00,0x00,0x00,"功",
/* (16 X 16 , 宋体 ) */

0x00,0x00,0x7F,0xFF,0x40,0x02,0x42,0x0A,0x42,0x12,0x42,0x22,0x42,0xC2,0x5F,0x02,
0x42,0x82,0x42,0x42,0x42,0x22,0x42,0x1A,0x40,0x02,0x7F,0xFF,0x00,0x00,0x00,0x00,"因",
/* (16 X 16 , 宋体 ) */

0x09,0x41,0x4A,0x59,0x2C,0x6A,0x08,0xC6,0xFF,0x44,0x08,0x4A,0x2C,0x71,0x4A,0x00,
0x01,0x01,0x0E,0x02,0xF1,0xCC,0x10,0x30,0x10,0xCC,0x1F,0x02,0x10,0x01,0x00,0x00,"数",
/* (16 X 16 , 宋体 ) */

0x00,0x01,0x02,0x02,0x42,0x04,0x42,0x08,0x42,0x30,0x43,0xC0,0x7E,0x00,0x42,0x00,
0x43,0xFC,0x42,0x02,0x42,0x02,0x42,0x02,0x02,0x02,0x02,0x0E,0x00,0x00,0x00,0x00,"无",
/* (16 X 16 , 宋体 ) */

0x10,0x40,0x10,0x80,0x91,0x00,0x77,0xFF,0x19,0x00,0x00,0xC1,0x00,0x02,0x7F,0xC4,
0x40,0x18,0x40,0x60,0x4F,0x80,0x40,0x7E,0x40,0x01,0x7F,0xC1,0x00,0x07,0x00,0x00,"视",
/* (16 X 16 , 宋体 ) */

0x10,0x40,0x10,0x80,0x11,0x00,0x13,0xFF,0x1C,0x02,0x30,0x82,0xD0,0x82,0x10,0x82,
0x10,0x82,0x17,0xFE,0x10,0x82,0x10,0x82,0x10,0x82,0x10,0x82,0x10,0x02,0x00,0x00,"在",
/* (16 X 16 , 宋体 ) */

0x08,0x10,0x08,0x20,0x08,0xC0,0x0B,0x00,0xFF,0xFF,0x09,0x00,0x08,0xC0,0x00,0x00,
0x7F,0xFF,0x44,0x42,0x44,0x42,0x44,0x42,0x44,0x42,0x7F,0xFF,0x00,0x00,0x00,0x00,"相",
/* (16 X 16 , 宋体 ) */

0x00,0x80,0x01,0x00,0x06,0x00,0x1F,0xFF,0xE0,0x02,0x08,0x02,0x09,0x82,0x08,0x7A,
0x88,0x02,0x68,0x02,0x08,0x0E,0x08,0x72,0x0B,0x82,0x08,0x02,0x00,0x02,0x00,0x00,"位",
/* (16 X 16 , 宋体 ) */

0x00,0x11,0x00,0x66,0x3F,0x80,0x20,0x00,0x2B,0xC6,0x2A,0x41,0x2A,0x41,0x2A,0x49,
0x2B,0xD5,0x20,0x21,0xFE,0x41,0x21,0x83,0xA3,0x40,0x6C,0x24,0x20,0xF3,0x00,0x00,"感",
/* (16 X 16 , 宋体 ) */

0x08,0x20,0x30,0x20,0x22,0x40,0x24,0x7F,0x28,0xA2,0x21,0x22,0xA2,0x22,0x64,0x22,
0x22,0x22,0x21,0x22,0x28,0xA2,0x24,0x7F,0x22,0x40,0x28,0x20,0x30,0x20,0x00,0x00,"容",
/* (16 X 16 , 宋体 ) */

0x00,0x80,0x07,0x00,0x00,0x00,0xFF,0xFF,0x08,0x00,0x04,0x00,0x02,0x02,0x3C,0x42,
0x08,0x42,0x08,0x42,0xFF,0xFE,0x08,0x42,0x08,0x42,0x08,0x42,0x00,0x02,0x00,0x00,"性",
/* (16 X 16 , 宋体 ) */

0x00,0x00,0x7F,0xFF,0x40,0x10,0x44,0x08,0x5B,0x10,0x60,0xE2,0x00,0x02,0x7F,0xFE,
0x44,0x42,0x44,0x42,0x44,0x42,0x44,0x42,0x7F,0xFE,0x00,0x02,0x00,0x02,0x00,0x00,"阻",
/* (16 X 16 , ?? ) */
};
const struct  hz24_tab                 //结构体名hz32_tab
{
       
       unsigned char   hz24[72];      //每个16x16汉字为16x16/8=32字节 
	     unsigned char   GBK[2];        //编译器在编译汉字时会编译成GBK码,每个汉字为两字节,例如"北"字内码为0xb1b1.
} ch24[] =                            //数据表 
{
0x04,0x44,0x0C,0xE6,0x35,0x44,0xC6,0x48,0x0C,0x48,0x04,0x40,0x08,0x80,0x18,0x84,
0xE5,0x24,0x22,0x22,0x25,0x12,0x28,0x89,0x30,0x80,0x00,0x40,0x00,0x40,0x00,0x00,
0x00,0x02,0x00,0x02,0x00,0x02,0x0F,0xFE,0x00,0x02,0x00,0x02,0x00,0x02,0xFF,0xFE,
0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x02,0x00,0x02,0x00,0x00,0x02,0x02,0x00,0x02,0x00,0x02,0x00,0x00,"止",
};






