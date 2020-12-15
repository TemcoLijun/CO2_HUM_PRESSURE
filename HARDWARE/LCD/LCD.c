#include "config.h"


bool isColorScreen;

#if 1//defined (DOT_MATRIX_SCREEN)
uint8 main_net_status_ctr = 10;
 

/*(0) !(1) "(2) #(3) $(4) %(5) &(6) '(7) ((8) )(9) *(10) +(11) ,(12) -(13) .(14) /(15)
 0(16) 1(17) 2(18) 3(19) 4(20) 5(21) 6(22) 7(23) 8(24) 9(25) :(26) ;(27) <(28) =(29) >(30) ?(31)
 @(32) A(33) B(34) C(35) D(36) E(37) F(38) G(39) H(40) I(41) J(42) K(43) L(44) M(45) N(46) O(47)
 P(48) Q(49) R(50) S(51) T(52) U(53) V(54) W(55) X(56) Y(57) Z(58) [(59) \(60) ](61) ^(62) _(63)
 `(64) a(65) b(66) c(67) d(68) e(69) f(70) g(71) h(72) i(73) j(74) k(75) l(76) m(77) n(78) o(79)
 p(80) q(81) r(82) s(83) t(84) u(85) v(86) w(87) x(88) y(89) z(90) {(91) |(92) }(93) ~(94) |(95)*/

uint8 const code Dot6_16[96][2][6] = 
{
	{
		{0x00,0x00,0x00,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
	},
	{
		{0x00,0x00,0xF8,0x00,0x00,0x00},
		{0x00,0x00,0x33,0x00,0x00,0x00},/*"!",1*/
	},
	{
		{0x00,0x08,0x06,0x08,0x06,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
	},
	{
		{0x40,0x40,0xF8,0x40,0xF8,0x40},
		{0x04,0x3F,0x05,0x3F,0x05,0x04},/*"#",3*/
	},
	{
		{0x70,0x88,0xFC,0x08,0x30,0x00},
		{0x18,0x20,0xFF,0x21,0x1E,0x00},/*"$",4*/
	},
	{
		{0xF0,0x98,0x60,0xE0,0x38,0x00},
		{0x00,0x31,0x0E,0x1F,0x33,0x0C},/*"%",5*/
	},
	{
		{0x00,0xF0,0x88,0x70,0x00,0x00},
		{0x1E,0x21,0x26,0x19,0x27,0x20},/*"&",6*/
	},
	{
		{0x10,0x0E,0x00,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
	},
	

	{

{0x00,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x3F,0x0C,0x02,0x00,0x00},/*"?????",0*/
	},
	{	
{0x00,0x00,0x20,0x18,0xFE,0x00},
{0x00,0x00,0x00,0x00,0x3F,0x00},/*"?????",0*/
		
	},
	

	
	
	{
		{0x40,0x80,0xF0,0x80,0x40,0x00},
		{0x02,0x01,0x0F,0x01,0x02,0x00},/*"*",10*/
	},
	{
		{0x00,0x00,0xF0,0x00,0x00,0x00},
		{0x01,0x01,0x1F,0x01,0x01,0x00},/*"+",11*/
	},
	{
		{0x00,0x00,0x00,0x00,0x00,0x00},
		{0x80,0x70,0x00,0x00,0x00,0x00},/*",",12*/
	},
	{
		{0x00,0x00,0x00,0x00,0x00,0x00},
		{0x01,0x01,0x01,0x01,0x01,0x00},/*"-",13*/
	},
	{
		{0x00,0x00,0x00,0x00,0x00,0x00},
		{0x00,0x30,0x00,0x00,0x00,0x00},/*".",14*/
	},
	{
		{0x00,0x00,0x80,0x70,0x0C,0x00},
		{0x60,0x1C,0x03,0x00,0x00,0x00},/*"/",15*/
	},
	{
		{0xF0,0x08,0x08,0x18,0xE0,0x00},
		{0x1F,0x20,0x20,0x30,0x0F,0x00},/*"0",16*/
	},
	{
		{0x00,0x10,0xF8,0x00,0x00,0x00},
		{0x00,0x20,0x3F,0x20,0x00,0x00},/*"1",17*/
	},
	{
		{0x70,0x08,0x08,0x08,0xF0,0x00},
		{0x30,0x2C,0x22,0x21,0x30,0x00},/*"2",18*/
	},
	{
		{0x30,0x08,0x88,0x88,0x70,0x00},
		{0x18,0x20,0x20,0x31,0x1E,0x00},/*"3",19*/
	},
	{
		{0x00,0x80,0x60,0xF0,0x00,0x00},
		{0x06,0x05,0x24,0x3F,0x24,0x04},/*"4",20*/
	},
	{
		{0xF8,0x08,0x88,0x88,0x08,0x00},
		{0x19,0x21,0x20,0x31,0x1F,0x00},/*"5",21*/
	},
	{
		{0xE0,0x18,0x88,0x98,0x00,0x00},
		{0x0F,0x31,0x20,0x20,0x1F,0x00},/*"6",22*/
	},
	{
		{0x38,0x08,0x08,0xE8,0x18,0x00},
		{0x00,0x00,0x3F,0x00,0x00,0x00},/*"7",23*/
	},
	{
		{0x70,0x88,0x08,0x88,0x70,0x00},
		{0x1E,0x21,0x21,0x21,0x1E,0x00},/*"8",24*/
	},
	{
		{0xF0,0x08,0x08,0x18,0xE0,0x00},
		{0x01,0x32,0x22,0x31,0x0F,0x00},/*"9",25*/
	},
	{
		{0x00,0x00,0xC0,0x00,0x00,0x00},
		{0x00,0x00,0x30,0x00,0x00,0x00},/*":",26*/
	},
	{
		{0x00,0x00,0x80,0x00,0x00,0x00},
		{0x00,0x00,0xE0,0x00,0x00,0x00},/*";",27*/
	},
	{
		{0x00,0x00,0x80,0x60,0x10,0x08},
		{0x00,0x01,0x02,0x0C,0x10,0x20},/*"<",28*/
	},
	{
		{0x40,0x40,0x40,0x40,0x40,0x00},
		{0x04,0x04,0x04,0x04,0x04,0x00},/*"=",29*/
	},
	{
		{0x00,0x08,0x30,0x40,0x80,0x00},
		{0x00,0x20,0x18,0x04,0x02,0x01},/*">",30*/
	},
	{
		{0x70,0x08,0x08,0x88,0x70,0x00},
		{0x00,0x00,0x37,0x01,0x00,0x00},/*"?",31*/
	},
	{
		{0xF0,0x10,0x88,0x78,0xF0,0x00},
		{0x1F,0x20,0x27,0x34,0x0F,0x00},/*"@",32*/
	},
	{
		{0x00,0x80,0x78,0xE0,0x00,0x00},
		{0x20,0x3F,0x02,0x03,0x3E,0x20},/*"A",33*/
	},
	{
		{0x08,0xF8,0x88,0x88,0x70,0x00},
		{0x20,0x3F,0x20,0x20,0x1F,0x00},/*"B",34*/
	},
	{
		{0xF0,0x10,0x08,0x08,0x18,0x00},
		{0x1F,0x20,0x20,0x20,0x10,0x00},/*"C",35*/
	},
	{
		{0x08,0xF8,0x08,0x10,0xE0,0x00},
		{0x20,0x3F,0x20,0x10,0x0F,0x00},/*"D",36*/
	},
	{
		{0x08,0xF8,0x88,0xE8,0x18,0x00},
		{0x20,0x3F,0x20,0x23,0x30,0x00},/*"E",37*/
	},
	{
		{0x08,0xF8,0x88,0xE8,0x18,0x00},
		{0x20,0x3F,0x20,0x03,0x00,0x00},/*"F",38*/
	},
	{
		{0xE0,0x10,0x08,0x08,0x18,0x00},
		{0x0F,0x10,0x20,0x22,0x1E,0x02},/*"G",39*/
	},
	{
		{0x08,0xF8,0x00,0x00,0xF8,0x08},
		{0x20,0x3F,0x01,0x01,0x3F,0x20},/*"H",40*/
	},
	{
		{0x08,0x08,0xF8,0x08,0x08,0x00},
		{0x20,0x20,0x3F,0x20,0x20,0x00},/*"I",41*/
	},
	{
		{0x00,0x08,0x08,0xF8,0x08,0x08},
		{0xC0,0x80,0x80,0x7F,0x00,0x00},/*"J",42*/
	},
	{
		{0x08,0xF8,0x88,0x60,0x18,0x08},
		{0x20,0x3F,0x20,0x07,0x3C,0x20},/*"K",43*/
	},
	{
		{0x08,0xF8,0x08,0x00,0x00,0x00},
		{0x20,0x3F,0x20,0x20,0x20,0x30},/*"L",44*/
	},
	{
		{0xF8,0xF8,0x00,0xF8,0xF8,0x00},
		{0x3F,0x00,0x3F,0x00,0x3F,0x00},/*"M",45*/
	},
	{
		{0x08,0xF8,0xE0,0x08,0xF8,0x08},
		{0x20,0x3F,0x21,0x06,0x3F,0x00},/*"N",46*/
	},
	{
		{0xF0,0x08,0x08,0x18,0xE0,0x00},
		{0x1F,0x20,0x20,0x30,0x0F,0x00},/*"O",47*/
	},
	{
		{0x08,0xF8,0x08,0x08,0xF0,0x00},
		{0x20,0x3F,0x21,0x01,0x00,0x00},/*"P",48*/
	},
	{
		{0xF0,0x08,0x08,0x18,0xE0,0x00},
		{0x0F,0x34,0x2C,0x70,0x7F,0x00},/*"Q",49*/
	},
	{
		{0x08,0xF8,0x88,0x88,0x70,0x00},
		{0x20,0x3F,0x20,0x03,0x3C,0x20},/*"R",50*/
	},
	{
		{0x70,0x88,0x08,0x08,0x18,0x00},
		{0x30,0x20,0x21,0x22,0x1C,0x00},/*"S",51*/
	},
	{
		{0x18,0x08,0xF8,0x08,0x18,0x00},
		{0x00,0x20,0x3F,0x20,0x00,0x00},/*"T",52*/
	},
	{
		{0x08,0xF8,0x00,0x00,0xF8,0x08},
		{0x00,0x1F,0x20,0x20,0x1F,0x00},/*"U",53*/
	},
	{
		{0x08,0xF8,0x00,0x80,0xF8,0x08},
		{0x00,0x03,0x3C,0x0F,0x00,0x00},/*"V",54*/
	},
	{
		{0x78,0x84,0xF8,0xC0,0x78,0x00},
		{0x00,0x3F,0x00,0x3F,0x00,0x00},/*"W",55*/
	},
	{
		{0x08,0x78,0x80,0x78,0x08,0x00},
		{0x20,0x3C,0x03,0x3C,0x20,0x00},/*"X",56*/
	},
	{
		{0x08,0xF8,0x80,0x78,0x08,0x00},
		{0x00,0x20,0x3F,0x20,0x00,0x00},/*"Y",57*/
	},
	{
		{0x18,0x08,0x88,0x78,0x08,0x00},
		{0x20,0x3C,0x23,0x20,0x30,0x00},/*"Z",58*/
	},
	{
		{0x00,0x00,0xFE,0x02,0x02,0x00},
		{0x00,0x00,0x7F,0x40,0x40,0x00},/*"[",59*/
	},
	{
		{0x00,0x38,0xC0,0x00,0x00,0x00},
		{0x00,0x00,0x01,0x1E,0x60,0x00},/*"\",60*/
	},
	{
		{0x00,0x02,0x02,0xFE,0x00,0x00},
		{0x00,0x40,0x40,0x7F,0x00,0x00},/*"]",61*/
	},
	{
		{0x00,0x04,0x02,0x04,0x00,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
	},
	{
		{0x00,0x00,0x00,0x00,0x00,0x00},
		{0x80,0x80,0x80,0x80,0x80,0x80},/*"_",63*/
	},
	{
		{0x00,0x02,0x04,0x00,0x00,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
	},
	{
		{0x00,0x00,0x80,0x80,0x80,0x00},
		{0x00,0x3D,0x26,0x22,0x3F,0x20},/*"a",65*/
	},
	{
		{0x08,0xF8,0x00,0x80,0x00,0x00},
		{0x00,0x1F,0x21,0x20,0x1F,0x00},/*"b",66*/
	},
	{
		{0x00,0x00,0x80,0x80,0x80,0x00},
		{0x00,0x1F,0x21,0x20,0x21,0x00},/*"c",67*/
	},
	{
		{0x00,0x00,0x80,0x88,0xF8,0x00},
		{0x00,0x1F,0x20,0x20,0x3F,0x20},/*"d",68*/
	},
	{
		{0x00,0x00,0x80,0x80,0x00,0x00},
		{0x00,0x1F,0x22,0x22,0x23,0x00},/*"e",69*/
	},
	{
		{0x00,0x80,0xF0,0x88,0x88,0x18},
		{0x00,0x20,0x3F,0x20,0x20,0x00},/*"f",70*/
	},
	{
		{0x00,0x00,0x80,0x80,0x80,0x80},
		{0x00,0x6B,0x94,0x94,0x93,0x60},/*"g",71*/
	},
	{
		{0x08,0xF8,0x00,0x80,0x80,0x00},
		{0x20,0x3F,0x21,0x00,0x3F,0x20},/*"h",72*/
	},
	{
		{0x00,0x80,0x98,0x00,0x00,0x00},
		{0x00,0x20,0x3F,0x20,0x00,0x00},/*"i",73*/
	},
	{
		{0x00,0x00,0x80,0x98,0x00,0x00},
		{0xC0,0x80,0x80,0x7F,0x00,0x00},/*"j",74*/
	},
	{
		{0x08,0xF8,0x00,0x80,0x80,0x80},
		{0x20,0x3F,0x24,0x06,0x39,0x20},/*"k",75*/
	},
	{
		{0x08,0x08,0xF8,0x00,0x00,0x00},
		{0x20,0x20,0x3F,0x20,0x20,0x00},/*"l",76*/
	},
	{
		{0x80,0x80,0x80,0x80,0x00,0x00},
		{0x3F,0x00,0x3F,0x00,0x3F,0x00},/*"m",77*/
	},
	{
		{0x80,0x80,0x00,0x80,0x80,0x00},
		{0x20,0x3F,0x21,0x00,0x3F,0x20},/*"n",78*/
	},
	{
		{0x00,0x00,0x80,0x80,0x00,0x00},
		{0x00,0x1F,0x20,0x20,0x1F,0x00},/*"o",79*/
	},
	{
		{0x80,0x80,0x80,0x80,0x00,0x00},
		{0x80,0xFF,0xA0,0x20,0x1F,0x00},/*"p",80*/
	},
	{
		{0x00,0x00,0x80,0x80,0x80,0x00},
		{0x00,0x1F,0x20,0xA0,0xFF,0x80},/*"q",81*/
	},
	{
		{0x80,0x80,0x00,0x80,0x80,0x00},
		{0x20,0x3F,0x21,0x00,0x01,0x00},/*"r",82*/
	},
	{
		{0x00,0x00,0x80,0x80,0x80,0x00},
		{0x00,0x23,0x24,0x24,0x39,0x00},/*"s",83*/
	},
	{
		{0x00,0x80,0xE0,0x80,0x00,0x00},
		{0x00,0x00,0x1F,0x20,0x20,0x00},/*"t",84*/
	},
	{
		{0x80,0x80,0x00,0x80,0x80,0x00},
		{0x00,0x3F,0x20,0x20,0x3F,0x20},/*"u",85*/
	},
	{
		{0x80,0x80,0x00,0x00,0x80,0x80},
		{0x00,0x07,0x38,0x1C,0x03,0x00},/*"v",86*/
	},
	{
		{0x80,0x40,0x80,0x00,0x80,0x00},
		{0x03,0x3C,0x03,0x3E,0x03,0x00},/*"w",87*/
	},
	{
		{0x80,0x80,0x00,0x80,0x80,0x00},
		{0x20,0x33,0x0E,0x3B,0x20,0x00},/*"x",88*/
	},
	{
		{0x80,0x80,0x00,0x00,0x80,0x80},
		{0x80,0x87,0x78,0x0C,0x03,0x00},/*"y",89*/
	},
	{
		{0x00,0x80,0x80,0x80,0x80,0x00},
		{0x00,0x30,0x2C,0x23,0x30,0x00},/*"z",90*/
	},
	{
		{0x00,0x00,0x80,0x7E,0x02,0x00},
		{0x00,0x00,0x00,0x3F,0x40,0x00},/*"{",91*/
	},
	{
		//{0x00,0x00,0x00,0xFF,0x00,0x00},
		//{0x00,0x00,0x00,0xFF,0x00,0x00},/*"|",92*/
		{0x1C,0x22,0x1C,0xC0,0x40,0x40},
		{0x00,0x00,0x00,0x3F,0x02,0x02},/*"未命名文件",DEG AND F*/
	},
	{
		//{0x00,0x02,0x7E,0x80,0x00,0x00},
		//{0x00,0x40,0x3F,0x00,0x00,0x00},/*"}",93*/
		{0xF8,0xF0,0xE0,0xC0,0x80,0x00},
		{0x0F,0x07,0x03,0x01,0x00,0x00},/*"未命名文件",0 */
	},
	{
		//{0x06,0x01,0x02,0x04,0x04,0x03},
		//{0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/ 
//		{0x1C,0x22,0x1C,0x80,0x40,0x40},
//		{0x00,0x00,0x00,0x1F,0x20,0x20},/*"未命名文件",DEG AND C */
		{0x18,0x24,0x98,0x40,0x40,0x80},
		{0x00,0x0F,0x10,0x20,0x20,0x10},/*"~",94*/
	},
	{
		{0x00,0x00,0x00,0xFF,0x00,0x00},
		{0x00,0x00,0x00,0xFF,0x00,0x00},/*"|",95*/
	}	
};

uint8 const code Dot8_16[95][2][8] = 
{
	{
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*" ",0*/
	},
	{
		{0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF},/*"!",1*/
	},
	{
		{0xFF,0xEF,0xF3,0xEF,0xF3,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*""",2*/
	},
	{
		{0xFF,0xEF,0x03,0xEF,0x03,0xEF,0xFF,0xFF},
		{0xFF,0xFB,0xE0,0xFB,0xE0,0xFB,0xFF,0xFF},/*"#",3*/
	},
	{
		{0xFF,0xCF,0xB7,0x03,0x77,0xCF,0xFF,0xFF},
		{0xFF,0xF9,0xF7,0xE0,0xF7,0xF8,0xFF,0xFF},/*"$",4*/
	},
	{
		{0xFF,0xE7,0xDB,0x27,0xCF,0xF3,0xFF,0xFF},
		{0xFF,0xF3,0xFC,0xF9,0xF6,0xF9,0xFF,0xFF},/*"%",5*/
	},
	{
		{0xFF,0x67,0x9B,0x67,0xFF,0x7F,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF6,0xF9,0xF6,0xFF,0xFF},/*"&",6*/
	},
	{
		{0xFF,0xFF,0xEB,0xF3,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"'",7*/
	},
	{
		{0xFF,0xFF,0x1F,0xE7,0xFB,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFC,0xF3,0xEF,0xFF,0xFF,0xFF},/*"(",8*/
	},
	{
		{0xFF,0xFF,0xFB,0xE7,0x1F,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xEF,0xF3,0xFC,0xFF,0xFF,0xFF},/*")",9*/
	},
	{
		{0xFF,0x9F,0x7F,0x0F,0x7F,0x9F,0xFF,0xFF},
		{0xFF,0xFC,0xFF,0xF8,0xFF,0xFC,0xFF,0xFF},/*"*",10*/
	},
	{
		{0xFF,0x7F,0x7F,0x0F,0x7F,0x7F,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF},/*"+",11*/
	},
	{
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xEB,0xF3,0xFF,0xFF,0xFF,0xFF},/*",",12*/
	},
	{
		{0xFF,0x7F,0x7F,0x7F,0x7F,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"-",13*/
	},
	{
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xF3,0xF3,0xFF,0xFF,0xFF,0xFF},/*".",14*/
	},
	{
		{0xFF,0xFF,0xFF,0x3F,0xCF,0xF3,0xFF,0xFF},
		{0xFF,0xE7,0xF9,0xFE,0xFF,0xFF,0xFF,0xFF},/*"/",15*/
	},
	{
		{0xFF,0x0F,0xF7,0xF7,0x0F,0xFF,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF8,0xFF,0xFF,0xFF},/*"0",16*/
	},
	{
		{0xFF,0xFF,0xEF,0x07,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF},/*"1",17*/
	},
	{
		{0xFF,0xCF,0xF7,0x77,0x8F,0xFF,0xFF,0xFF},
		{0xFF,0xF3,0xF4,0xF7,0xF7,0xFF,0xFF,0xFF},/*"2",18*/
	},
	{
		{0xFF,0xCF,0x77,0x77,0x8F,0xFF,0xFF,0xFF},
		{0xFF,0xF9,0xF7,0xF7,0xF8,0xFF,0xFF,0xFF},/*"3",19*/
	},
	{
		{0xFF,0xFF,0x3F,0xCF,0x07,0xFF,0xFF,0xFF},
		{0xFF,0xFC,0xFD,0xFD,0xF0,0xFD,0xFF,0xFF},/*"4",20*/
	},
	{
		{0xFF,0x07,0xB7,0xB7,0x77,0xFF,0xFF,0xFF},
		{0xFF,0xF9,0xF7,0xF7,0xF8,0xFF,0xFF,0xFF},/*"5",21*/
	},
	{
		{0xFF,0x0F,0x77,0x77,0xCF,0xFF,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF8,0xFF,0xFF,0xFF},/*"6",22*/
	},
	{
		{0xFF,0xF7,0xF7,0x37,0xC7,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xF1,0xFE,0xFF,0xFF,0xFF,0xFF},/*"7",23*/
	},
	{
		{0xFF,0x8F,0x77,0x77,0x8F,0xFF,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF8,0xFF,0xFF,0xFF},/*"8",24*/
	},
	{
		{0xFF,0x8F,0x77,0x77,0x0F,0xFF,0xFF,0xFF},
		{0xFF,0xF9,0xF7,0xF7,0xF8,0xFF,0xFF,0xFF},/*"9",25*/
	},
	{
		{0xFF,0xFF,0x9F,0x9F,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xF3,0xF3,0xFF,0xFF,0xFF,0xFF},/*":",26*/
	},
	{
		{0xFF,0xFF,0x9F,0x9F,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xEB,0xF3,0xFF,0xFF,0xFF,0xFF},/*";",27*/
	},
	{
		{0xFF,0x7F,0xBF,0xDF,0xEF,0xF7,0xFF,0xFF},
		{0xFF,0xFF,0xFE,0xFD,0xFB,0xF7,0xFF,0xFF},/*"<",28*/
	},
	{
		{0xFF,0xDF,0xDF,0xDF,0xDF,0xFF,0xFF,0xFF},
		{0xFF,0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF},/*"=",29*/
	},
	{
		{0xFF,0xF7,0xEF,0xDF,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xF7,0xFB,0xFD,0xFE,0xFF,0xFF,0xFF},/*">",30*/
	},
	{
		{0xFF,0xCF,0xF7,0x77,0x8F,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xF2,0xFF,0xFF,0xFF,0xFF},/*"?",31*/
	},
	{
		{0xFF,0x0F,0xD7,0x17,0xF7,0x0F,0xFF,0xFF},
		{0xFF,0xF8,0xF6,0xF6,0xF5,0xFA,0xFF,0xFF},/*"@",32*/
	},
	{
		{0xFF,0xFF,0x1F,0xE7,0x1F,0xFF,0xFF,0xFF},
		{0xFF,0xF0,0xFD,0xFD,0xFD,0xF0,0xFF,0xFF},/*"A",33*/
	},
	{
		{0xFF,0x07,0x77,0x77,0x77,0x8F,0xFF,0xFF},
		{0xFF,0xF0,0xF7,0xF7,0xF7,0xF8,0xFF,0xFF},/*"B",34*/
	},
	{
		{0xFF,0x0F,0xF7,0xF7,0xF7,0xCF,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF7,0xF9,0xFF,0xFF},/*"C",35*/
	},
	{
		{0xFF,0x07,0xF7,0xF7,0xEF,0x1F,0xFF,0xFF},
		{0xFF,0xF0,0xF7,0xF7,0xFB,0xFC,0xFF,0xFF},/*"D",36*/
	},
	{
		{0xFF,0x07,0x77,0x77,0x77,0xF7,0xFF,0xFF},
		{0xFF,0xF0,0xF7,0xF7,0xF7,0xF7,0xFF,0xFF},/*"E",37*/
	},
	{
		{0xFF,0x07,0x77,0x77,0x77,0xF7,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"F",38*/
	},
	{
		{0xFF,0x0F,0xF7,0xF7,0xF7,0xCF,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xFA,0xF0,0xFF,0xFF},/*"G",39*/
	},
	{
		{0xFF,0x07,0x7F,0x7F,0x7F,0x07,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF},/*"H",40*/
	},
	{
		{0xFF,0xFF,0xF7,0x07,0xF7,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xF7,0xF0,0xF7,0xFF,0xFF,0xFF},/*"I",41*/
	},
	{
		{0xFF,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF},
		{0xFF,0xF9,0xF7,0xF7,0xF8,0xFF,0xFF,0xFF},/*"J",42*/
	},
	{
		{0xFF,0x07,0x7F,0x9F,0xE7,0xFF,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xFC,0xF3,0xFF,0xFF,0xFF},/*"K",43*/
	},
	{
		{0xFF,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xF0,0xF7,0xF7,0xF7,0xF7,0xFF,0xFF},/*"L",44*/
	},
	{
		{0xFF,0x07,0x1F,0xFF,0x1F,0x07,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xFF},/*"M",45*/
	},
	{
		{0xFF,0x07,0xCF,0x3F,0xFF,0x07,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xFE,0xF9,0xF0,0xFF,0xFF},/*"N",46*/
	},
	{
		{0xFF,0x0F,0xF7,0xF7,0xF7,0x0F,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF7,0xF8,0xFF,0xFF},/*"O",47*/
	},
	{
		{0xFF,0x07,0x77,0x77,0x77,0x8F,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"P",48*/
	},
	{
		{0xFF,0x0F,0xF7,0xF7,0xF7,0x0F,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF5,0xFB,0xF4,0xFF,0xFF},/*"Q",49*/
	},
	{
		{0xFF,0x07,0x77,0x77,0x77,0x8F,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xFF,0xFE,0xF1,0xFF,0xFF},/*"R",50*/
	},
	{
		{0xFF,0xCF,0xB7,0x77,0xF7,0xCF,0xFF,0xFF},
		{0xFF,0xF9,0xF7,0xF7,0xF6,0xF9,0xFF,0xFF},/*"S",51*/
	},
	{
		{0xFF,0xF7,0xF7,0x07,0xF7,0xF7,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF},/*"T",52*/
	},
	{
		{0xFF,0x07,0xFF,0xFF,0xFF,0x07,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF7,0xF8,0xFF,0xFF},/*"U",53*/
	},
	{
		{0xFF,0xC7,0x3F,0xFF,0x3F,0xC7,0xFF,0xFF},
		{0xFF,0xFF,0xFE,0xF1,0xFE,0xFF,0xFF,0xFF},/*"V",54*/
	},
	{
		{0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0xFF},
		{0xFF,0xFF,0xF0,0xFF,0xF0,0xFF,0xFF,0xFF},/*"W",55*/
	},
	{
		{0xFF,0xE7,0x9F,0x7F,0x9F,0xE7,0xFF,0xFF},
		{0xFF,0xF3,0xFC,0xFF,0xFC,0xF3,0xFF,0xFF},/*"X",56*/
	},
	{
		{0xFF,0xE7,0x9F,0x7F,0x9F,0xE7,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF},/*"Y",57*/
	},
	{
		{0xFF,0xF7,0xF7,0x77,0x97,0xE7,0xFF,0xFF},
		{0xFF,0xF3,0xF4,0xF7,0xF7,0xF7,0xFF,0xFF},/*"Z",58*/
	},
	{
		{0xFF,0xFF,0xFF,0x03,0xFB,0xFB,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xE0,0xEF,0xEF,0xFF,0xFF},/*"[",59*/
	},
	{
		{0xFF,0xF3,0xCF,0x3F,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xFE,0xF9,0xE7,0xFF,0xFF},/*"\",60*/
	},
	{
		{0xFF,0xFB,0xFB,0x03,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xEF,0xEF,0xE0,0xFF,0xFF,0xFF,0xFF},/*"]",61*/
	},
	{
		{0xFF,0xFF,0xF7,0xFB,0xF7,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"^",62*/
	},
	{
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
		{0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xFF,0xFF},/*"_",63*/
	},
	{
		{0xFF,0xFF,0xFB,0xF7,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"`",64*/
	},
	{
		{0xFF,0x7F,0xBF,0xBF,0x7F,0xFF,0xFF,0xFF},
		{0xFF,0xF9,0xF6,0xF6,0xF8,0xF7,0xFF,0xFF},/*"a",65*/
	},
	{
		{0xFF,0x07,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xF0,0xF7,0xF7,0xF7,0xF8,0xFF,0xFF},/*"b",66*/
	},
	{
		{0xFF,0x7F,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF7,0xFB,0xFF,0xFF},/*"c",67*/
	},
	{
		{0xFF,0x7F,0xBF,0xBF,0xBF,0x07,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF7,0xF0,0xFF,0xFF},/*"d",68*/
	},
	{
		{0xFF,0x7F,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xF8,0xF6,0xF6,0xF6,0xFA,0xFF,0xFF},/*"e",69*/
	},
	{
		{0xFF,0xBF,0x0F,0xB7,0xF7,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF},/*"f",70*/
	},
	{
		{0xFF,0x7F,0xBF,0xBF,0x7F,0xBF,0xFF,0xFF},
		{0xFF,0xF5,0xEA,0xEA,0xEB,0xF7,0xFF,0xFF},/*"g",71*/
	},
	{
		{0xFF,0x07,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF},/*"h",72*/
	},
	{
		{0xFF,0xFF,0xFF,0x27,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF},/*"i",73*/
	},
	{
		{0xFF,0xFF,0xFF,0x27,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xEF,0xEF,0xF0,0xFF,0xFF,0xFF,0xFF},/*"j",74*/
	},
	{
		{0xFF,0x07,0xFF,0xFF,0x7F,0xBF,0xFF,0xFF},
		{0xFF,0xF0,0xFD,0xFC,0xFB,0xF7,0xFF,0xFF},/*"k",75*/
	},
	{
		{0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF},/*"l",76*/
	},
	{
		{0xFF,0x3F,0xBF,0x7F,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xFF},/*"m",77*/
	},
	{
		{0xFF,0x3F,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xF0,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF},/*"n",78*/
	},
	{
		{0xFF,0x7F,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF7,0xF8,0xFF,0xFF},/*"o",79*/
	},
	{
		{0xFF,0x3F,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xE0,0xFB,0xFB,0xFB,0xFC,0xFF,0xFF},/*"p",80*/
	},
	{
		{0xFF,0x7F,0xBF,0xBF,0xBF,0x3F,0xFF,0xFF},
		{0xFF,0xFC,0xFB,0xFB,0xFB,0xE0,0xFF,0xFF},/*"q",81*/
	},
	{
		{0xFF,0xFF,0x3F,0x7F,0xBF,0xBF,0xFF,0xFF},
		{0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF},/*"r",82*/
	},
	{
		{0xFF,0x7F,0xBF,0xBF,0xBF,0x7F,0xFF,0xFF},
		{0xFF,0xFB,0xF6,0xF6,0xF5,0xFB,0xFF,0xFF},/*"s",83*/
	},
	{
		{0xFF,0xBF,0x07,0xBF,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xF8,0xF7,0xF7,0xFF,0xFF,0xFF},/*"t",84*/
	},
	{
		{0xFF,0x3F,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF},
		{0xFF,0xF8,0xF7,0xF7,0xF7,0xF0,0xFF,0xFF},/*"u",85*/
	},
	{
		{0xFF,0x3F,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF},
		{0xFF,0xFF,0xFC,0xF3,0xFC,0xFF,0xFF,0xFF},/*"v",86*/
	},
	{
		{0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0xFF},
		{0xFF,0xFE,0xF1,0xFE,0xF1,0xFE,0xFF,0xFF},/*"w",87*/
	},
	{
		{0xFF,0xBF,0x7F,0xFF,0x7F,0xBF,0xFF,0xFF},
		{0xFF,0xF7,0xFB,0xFC,0xFB,0xF7,0xFF,0xFF},/*"x",88*/
	},
	{
		{0xFF,0x3F,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF},
		{0xFF,0xEF,0xEC,0xF3,0xFC,0xFF,0xFF,0xFF},/*"y",89*/
	},
	{
		{0xFF,0xBF,0xBF,0xBF,0xBF,0x3F,0xFF,0xFF},
		{0xFF,0xF7,0xF3,0xF5,0xF6,0xF7,0xFF,0xFF},/*"z",90*/
	},
	{
		{0xFF,0xFF,0x7F,0x83,0xFB,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xE0,0xEF,0xFF,0xFF,0xFF},/*"{",91*/
	},
	{
		{0xFF,0xFF,0xFF,0x01,0xFF,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xE0,0xFF,0xFF,0xFF,0xFF},/*"|",92*/
	},
	{
		{0xFF,0xFF,0xFB,0x83,0x7F,0xFF,0xFF,0xFF},
		{0xFF,0xFF,0xEF,0xE0,0xFF,0xFF,0xFF,0xFF},/*"}",93*/
	},
	{
		{0xFF,0xF7,0xFB,0xFB,0xF7,0xFB,0xFF,0xFF},
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*"~",94*/
	}	
};

struct _CURSOR_ cursor = {0, 0, ' ', ' ', CURSOR_OFF};
U32_T   bl_timer_start, bl_timer_end;

void Lcd_Write_Byte(u8 num)	// from high to low
{
	u8 i;
	if(isColorScreen == false)
	{
		LCD_CS = 0;//Lcd_Set(CS_LOW);
	//	delay_us(5);
		LCD_AO = 1;//Lcd_Set(A0_HIGH);
	//	delay_us(5);	
		for(i = 0; i < 8; i++)
		{
			if(num & 0x80)
				LCD_DATA_W = 1;	// Lcd_Set(DATA_HIGH);
				else
				LCD_DATA_W = 0;	// Lcd_Set(DATA_LOW);
			
	//		delay_us(5);
				LCD_CLK = 0;	// Lcd_Set(CLK_LOW);
	//		delay_us(5);
			LCD_CLK = 1;	// Lcd_Set(CLK_HIGH);
	//		delay_us(5);

				num <<= 1;	
		}
		LCD_CS = 1;		// Lcd_Set(CS_HIGH);
	//	delay_us(5);
	}
}

void Lcd_Write_Command(u8 command) // from high to low
{
	u8 i;
	if(isColorScreen == false)
	{
		LCD_CS = 0;		// Lcd_Set(CS_LOW);//
	//	delay_us(5);
		LCD_AO = 0;		// Lcd_Set(A0_LOW);//
	//	delay_us(5);
		for(i = 0;i < 8;i++)
		{
			if(command & 0x80)
				LCD_DATA_W = 1;	// Lcd_Set(DATA_HIGH);
				else
				LCD_DATA_W = 0;	// Lcd_Set(DATA_LOW);//
				
	//		delay_us(5);
				LCD_CLK = 0;	// Lcd_Set(CLK_LOW);//
	//		delay_us(5);
			LCD_CLK = 1;	// Lcd_Set(CLK_HIGH);//
	//		delay_us(5);

				command <<= 1;
		}
		LCD_CS = 1;		// Lcd_Set(CS_HIGH);//
	}
//	delay_us(5);
}
void Lcd_Write_Char(uint8 row, uint8 line, uint8 num, uint8 disp_nor_or_inv) // row: 0 - 4 , line: 0 - 21
{
	uint8 loop; 
	uint8 index = num - ' ';
	uint16_t x,y,color;
	if(isColorScreen== false)
	{
		Lcd_Set_X_Addr(line * 6 + 3);
		Lcd_Set_Y_Addr(row * 2);
		for(loop = 0; loop < 6; loop++)
		{ 
			if(disp_nor_or_inv == DISP_NOR)
				Lcd_Write_Byte(Dot6_16[index][0][loop]);
			else
				Lcd_Write_Byte(~Dot6_16[index][0][loop]);
		}

		Lcd_Set_X_Addr(line * 6 + 3);
		Lcd_Set_Y_Addr(row * 2 + 1);
		for(loop = 0; loop < 6; loop++)
		{ 
			if(disp_nor_or_inv == DISP_NOR)
				Lcd_Write_Byte(Dot6_16[index][1][loop]);
			else
				Lcd_Write_Byte(~Dot6_16[index][1][loop]);
		}
	}
	else
	{
	
		x = row*30+MENU_FIRST_XPOS;
		y = THIRD_CH_POS+CO2_POSY_OFFSET*8+40-15*line;
		if(disp_nor_or_inv == DISP_NOR)
			color = TSTAT8_BACK_COLOR;
		else
			color = TSTAT8_MENU_COLOR2;
		disp_ch(2,x,y,num,SCH_COLOR,color);
	}
}

void Lcd_Set_Fuction(uint8 mode)
{
	uint8 fuction;
	if(isColorScreen == false)
	{
		fuction = 0x38 + mode;	// 0x20 + mode;
		Lcd_Write_Command(fuction);
	}
}

void Lcd_Set_Y_Addr(uint8 page)// 0 1 0 0        page 0 - 9
{
	uint8 addr;
	if(isColorScreen == false)
	{
		Lcd_Set_Fuction(0);
		addr = 0x40 + page;
		Lcd_Write_Command(addr);
	}
}

void Lcd_Set_X_Addr(uint8 line)// 1 1 1 0/1        page 0 - 129
{
	uint8 addr;
	uint8 line_low;
	uint8 line_high;
	if(isColorScreen == false)
	{
		Lcd_Set_Fuction(0);
		line_low = line & 0x0f;
		line = line >> 4;
		line_high = line; 
		addr = 0xe0 + line_low; //low
		Lcd_Write_Command(addr);
		addr = 0xf0 + line_high; //high
		Lcd_Write_Command(addr);
	}
}

void Lcd_Full_Screen(uint8 full)
{
	//#if defined (DOT_MATRIX_SCREEN)
	uint16 i;
//	Lcd_Write_Command(0x06);
	if(isColorScreen == false)
	{
		for(i = 0; i < 130 * 80; i++)	
		{
			Lcd_Write_Byte(full);
		}
	}
//	Lcd_Write_Command(0x07);
	//#if defined (COLOR_SCREEN)
	else
		ClearScreen(TSTAT8_BACK_COLOR);
	//#endif
}



void Lcd_Show_String(uint8 pos_row, uint8 pos_line, uint8 disp_mode, uint8 *str)
{
	//#if defined (DOT_MATRIX_SCREEN)
	
	uint8 loop = 0;
	uint8 length = strlen((char *)str);
	//uint8 length = strlen((char *)str);
	uint16_t x,y,color;

//	if((pos_row > MAX_ROW) || (pos_line > MAX_LINE))
//		return;
	if(isColorScreen == false)
	{
		if(length > (MAX_LINE - pos_line))
			length = MAX_LINE - pos_line;

	//	Lcd_Write_Command(0x06);
		for(loop = 0; loop < length; loop++)
			Lcd_Write_Char(pos_row, pos_line + loop, str[loop], disp_mode);
	//	Lcd_Write_Command(0x07);
	}
	
	//#if defined (COLOR_SCREEN)
	else
	{
//		if(length > (MAX_LINE - pos_line))
//			length = MAX_LINE - pos_line;

//		x = pos_row*30+MENU_FIRST_XPOS;
//		y = THIRD_CH_POS+CO2_POSY_OFFSET*8-24*pos_line;
//		if(disp_mode == DISP_NOR)
//			color = TSTAT8_BACK_COLOR;
//		else
//			color = TSTAT8_MENU_COLOR2;

//		disp_str(2, x, THIRD_CH_POS+CO2_POSY_OFFSET*8+40, str,SCH_COLOR,color);
		if(length > (MAX_LINE - pos_line))
		length = MAX_LINE - pos_line;

		x = pos_row*30+MENU_FIRST_XPOS;
		//y = THIRD_CH_POS+CO2_POSY_OFFSET*8-24*pos_line;
		y = THIRD_CH_POS+CO2_POSY_OFFSET*8+40-15*pos_line;
		if(disp_mode == DISP_NOR)
			color = TSTAT8_BACK_COLOR;
		else
			color = TSTAT8_MENU_COLOR2;
		
		disp_str(2, x, y, str,SCH_COLOR,color);
	}
	//#endif
}

//const uint8 blank[] = "                     ";

void Lcd_Clear_Row(uint8 row)
{
	Lcd_Show_String(row, 0, DISP_NOR, (uint8 *)"                     ");
}

uint8 Lcd_Show_Data(uint8 pos_row, uint8 pos_line, uint16 number, uint8 dot, uint8 align, uint8 mode)
{
	uint8 length, i, str[8],sign; 
	int16 number_temp ;
	number_temp = number;
	 
	if(isColorScreen == false)
	{
		if(dot > 5)
			return 0;
				
		if((pos_row > MAX_ROW) || (pos_line > MAX_LINE))
			return 0;
		sign = 0;
		
		if(number_temp < 0)
		{
			sign = 1;
			number = abs(number_temp);
		}
		itoa(number, str, dot);
	//	sprintf(num, "%u", number);
		length = strlen((char *)str);

		if(align == ALIGN_LEFT)
		{
			if(sign == 0)
			{
				for(i = 0; i < length; i++)
					Lcd_Write_Char(pos_row, pos_line + i, str[i], mode);
			}
			else
			{
				Lcd_Write_Char(pos_row, pos_line,'-', mode);
				for(i = 1; i < length; i++)
					Lcd_Write_Char(pos_row, pos_line + i, str[i], mode);
			}
		}
		else if(align == ALIGN_RIGHT)
		{
			if(sign == 0)
			{
				for(i = 0; i < length; i++)
					Lcd_Write_Char(pos_row, pos_line - i, str[length - 1 - i], mode);
			}
			else
			{
				for(i = 0; i < length; i++)
					Lcd_Write_Char(pos_row, pos_line - i, str[length - 1 - i], mode);
				Lcd_Write_Char(pos_row, pos_line - i, '-', mode);
			}
			
		}

		return length;
	}
}

//void Lcd_Show_two_digitals(uint8 pos_row, uint8 pos_line, uint8 dat)
//{
//	uint8 disp[3] = "  ";
//	disp[0] = dat / 10 + '0';
//	disp[1] = dat % 10 + '0';
//	Lcd_Show_String(pos_row, pos_line, DISP_NOR, disp);
//}


void update_cursor(void)
{
	static bit flag = FALSE;
	if(isColorScreen == false)
	{
		if(cursor.status == CURSOR_ON)
		{
			if(flag == FALSE)
			{
				Lcd_Write_Char(cursor.row, cursor.line, cursor.on_byte, DISP_INV); 
				flag = TRUE;
			}
			else
			{
				Lcd_Write_Char(cursor.row, cursor.line, cursor.off_byte, DISP_INV);
				flag = FALSE;
			}
		}
	}
}

void cursor_on(uint8 row, uint8 line, uint8 onByte, uint8 offByte)
{
	if(isColorScreen == false)
	{
		cursor.row = row;
		cursor.line = line;
		cursor.on_byte = onByte;
		cursor.off_byte = offByte;
		cursor.status = CURSOR_ON;
	}
}

void cursor_off(void)
{
	if(isColorScreen == false)
		cursor.status = CURSOR_OFF;
}


//U8_T const code month_text[12][] = 
//{
//	"Jan",
//	"Feb",
//	"Mar",
//	"Apr",
//	"May",
//	"Jun",
//	"Jul",
//	"Aug",
//	"Sep",
//	"Oct",
//	"Nov",
//	"Dec"
//};

U8_T time[] = "2013-09-19 17:16";

U8_T const   network_status_text[] = "  NETWORK:";
U8_T const   main_net_status_text[] = " Main-net:";
U8_T const   sub_net_status_text[] = " Subnet:";
U8_T const   net_status_ok_text[] = "OK     ";
U8_T const   net_status_dead_text[] = "Dead   ";
U8_T const   net_offline_text[] = "Offline";

U8_T const   alarm_text[] = "  ALARM:";
U8_T const	aqi_text[] = "    AQI:";
U8_T const   alarm_status_text[4][9] = 
{
	"Good   ",
	"Fair   ",
	"Pool   ",
	"Offline"
};

static U8_T scroll_message_length = 0;
bit scrolling_flag = FALSE;
U8_T XDATA message[200];


void start_scrolling(void)
{
	if(isColorScreen == false)
		scrolling_flag = TRUE;
}

void stop_scrolling(void)
{
	if(isColorScreen == false)
		scrolling_flag = FALSE;
}

 
void get_time_text(void)
{
	if(isColorScreen== false)
		sprintf((char *)time, "%04d-%02d-%02d %02d:%02d", (uint16)calendar.w_year, (uint16)calendar.w_month, (uint16)calendar.w_date, (uint16)calendar.hour, (uint16)calendar.min);
	else
	{
		sprintf((char *)color_time, "Time %02d:%02d", (uint16)calendar.hour, (uint16)calendar.min);
		sprintf((char *)date, "%04d-%02d-%02d", (uint16)calendar.w_year, (uint16)calendar.w_month, (uint16)calendar.w_date);
	}
}
extern uint8 const code baudrate_text[6][7];
uint8 const   AQI_LEVEL[6][15] = 
{
	"Good          ",					//AQI:   0 ~ 50
	"Moderate      ",				//AQI:  50 ~ 99
	"Poor For Some ",		//AQI:  99 ~ 149	
	"Poor          ",					//AQI: 149 ~ 200
	"Very Unhealthy",		//AQI: 200 ~ 300
	"Hazardous     "				//AQI: 300 ~ 500
};
void update_message_context(void)
{
	U8_T length;

	if(isColorScreen == false)
	{
		scroll_message_length = 0;
		if ((PRODUCT_ID == STM32_CO2_NET)||(PRODUCT_ID == STM32_CO2_RS485) ) 
		{	
		// Date & Time
			length = strlen((char *)time);
			memcpy((U8_T *)message + scroll_message_length, time, length);
			scroll_message_length += length;

		// Network
			length = strlen((char *)network_status_text);
			memcpy(message + scroll_message_length, network_status_text, length);
			scroll_message_length += length;
			// main net status
			length = strlen((char *)main_net_status_text);
			memcpy(message + scroll_message_length, main_net_status_text, length);
			scroll_message_length += length;
			if(main_net_status_ctr)
			{
				length = strlen((char *)net_status_ok_text);
				memcpy(message + scroll_message_length, net_status_ok_text, length);
				scroll_message_length += length;
			}
			else
			{
				length = strlen((char *)net_status_dead_text);
				memcpy(message + scroll_message_length, net_status_dead_text, length);
				scroll_message_length += length;
			}
			// sub net status
			length = strlen((char *)sub_net_status_text);
			memcpy(message + scroll_message_length, sub_net_status_text, length);
			scroll_message_length += length;
			if(db_ctr == current_online_ctr)
			{
				length = strlen((char *)net_status_ok_text);
				memcpy(message + scroll_message_length, net_status_ok_text, length);
				scroll_message_length += length;
			}
			else
			{
				U8_T i, id_temp;
				for(i = 0; i < db_ctr; i++)
				{
					id_temp = scan_db[i].id;
					if((current_online[id_temp / 8] & (1 << (id_temp % 8))) == 0x00)
					{
						if(i == 0) // internal co2 sensor
							sprintf((char *)text, "%s,", internal_text);
						else
							sprintf((char *)text, "%s%u,", external_text, (U16_T)id_temp);

						length = strlen((char *)text);
						memcpy(message + scroll_message_length, text, length);
						scroll_message_length += length;
					}
				}
				// clear the last ','
				scroll_message_length--;

				sprintf((char *)text, "%s", net_offline_text);
				length = strlen((char *)text);
				memcpy(message + scroll_message_length, text, length);
				scroll_message_length += length;
			}

		

			if(PRODUCT_ID == STM32_PM25)
			{
				length = sizeof(aqi_text) - 1;
				memcpy(message + scroll_message_length, aqi_text, length);
				scroll_message_length += length;
				length = strlen((char *)AQI_LEVEL[pm25_sensor.AQI]);
				memcpy(message + scroll_message_length, AQI_LEVEL[pm25_sensor.AQI], length);
				//sprintf((char *)text, "%s:%s,", internal_text, alarm_status_text[int_co2_str.alarm_state]);
			}
			else
			{
				// Alarm
				length = sizeof(alarm_text) - 1;
				memcpy(message + scroll_message_length, alarm_text, length);
				scroll_message_length += length;
				if((alarm_state & (~ALARM_MANUAL)) == STOP_ALARM)
				{
					length = strlen((char *)alarm_status_text[STOP_ALARM]);
					memcpy(message + scroll_message_length, alarm_status_text[STOP_ALARM], length);
					scroll_message_length += length;
				}
				else
				{
					U8_T i, id_temp;
			//		for(i = 0; i < db_ctr; i++)
					{
			//			id_temp = scan_db[i].id;
			//			if(i == 0)
						{
							
							{
								if(internal_co2_exist == TRUE)
								{ 
									sprintf((char *)text, "%s:%s,", internal_text, alarm_status_text[int_co2_str.alarm_state]);
									length = strlen((char *)text);
									memcpy(message + scroll_message_length, text, length);
									scroll_message_length += length;
								}
							}
						}
			//			else if(ext_co2_str[i - 1].alarm_state != STOP_ALARM)
			//			{
			//				sprintf((char *)text, "%s%u:%s,", external_text, (U16_T)id_temp, alarm_status_text[ext_co2_str[i - 1].alarm_state]);
			//				length = strlen((char *)text);
			//				memcpy(message + scroll_message_length, text, length);
			//				scroll_message_length += length;
			//			}
					}

					memcpy(message + scroll_message_length - 1, " ", 1);
				}
			}

		// SPACE
			length = 3;
			memcpy(message + scroll_message_length, "   ", length);
			scroll_message_length += length;
		}
		else if(PRODUCT_ID == STM32_PM25)
		{
			if(pm25_sensor.menu.scroll_set&0x01)
			{
				//sensor status
				strcpy((char *)text, (char *)"SensorStatus:"); 
				if(pm25_sensor.status) strcat((char *)text, (char *)"OK");
				else 
					strcat((char *)text, (char *)"Offline");
				
				strcat((char *)text, (char *)" ");
				
				length = strlen((char *)text);
				memcpy((U8_T *)message + scroll_message_length, text, length);
				scroll_message_length += length;
			}
			if((pm25_sensor.menu.scroll_set>>1)&0x01)
			{
				//RX TX
				strcpy((char *)text, (char *)"RX:"); 
				itoa(uart.rx_count, int_text, 0);
				strcat((char *)text, (char *)int_text); 
				
				strcat((char *)text, (char *)" TX:"); 
				itoa(uart.tx_count, int_text, 0);
				strcat((char *)text, (char *)int_text); 
				strcat((char *)text, (char *)" ");
				length = strlen((char *)text);
				memcpy((U8_T *)message + scroll_message_length, text, length);
				scroll_message_length += length;
			}
			if((pm25_sensor.menu.scroll_set>>2)&0x01)
			{
				//Baudrate
				strcpy((char *)text, (char *)"Baudrate:"); 
				strcat((char *)text, (char *)baudrate_text[modbus.baud]);
				
				strcat((char *)text, (char *)" ");
				
				length = strlen((char *)text);
				memcpy((U8_T *)message + scroll_message_length, text, length);
				scroll_message_length += length;
			}
			if((pm25_sensor.menu.scroll_set>>3)&0x01)
			{
				//AQI LEVEL
				strcpy((char *)text, (char *)" AQI LEVEL:"); 
				strcat((char *)text, (char *)AQI_LEVEL[pm25_sensor.level]);
				
				strcat((char *)text, (char *)" ");
				
				length = strlen((char *)text);
				memcpy((U8_T *)message + scroll_message_length, text, length);
				scroll_message_length += length;
			}
			if(pm25_sensor.menu.scroll_set == 0)
			{
				//null
				strcpy((char *)text, (char *)"       ");  
				length = strlen((char *)text);
				memcpy((U8_T *)message + scroll_message_length, text, length);
				scroll_message_length += length;
			}
			
		}
	}
}

void display_character_with_start_bit(U8_T row, U8_T start_line, U8_T start_bit, U8_T end_bit, U8_T c, U8_T disp_mode)
{
	U8_T i;
	U8_T index = c - ' ';

	if(isColorScreen == false)
	{
		if(start_line >= 130)
			return;
		
		Lcd_Set_X_Addr(start_line);
		Lcd_Set_Y_Addr(row * 2);
		for(i = start_bit; i < end_bit; i++)
		{ 
			if(disp_mode == DISP_NOR)
				Lcd_Write_Byte(Dot8_16[index][0][i]);
			else
				Lcd_Write_Byte(~Dot8_16[index][0][i]);
		}

		Lcd_Set_X_Addr(start_line);
		Lcd_Set_Y_Addr(row * 2 + 1);
		for(i = start_bit; i < end_bit; i++)
		{ 
			if(disp_mode == DISP_NOR)
				Lcd_Write_Byte(Dot8_16[index][1][i]);
			else
				Lcd_Write_Byte(~Dot8_16[index][1][i]);
		}
	}
}

void scrolling_message(void)
{
	U8_T i, disp_value, byte_index;
	static U8_T start_bit = 0;
	static U8_T start_byte = 0;

	if(isColorScreen == false)
	{
		if(scrolling_flag == FALSE)
			return;

		byte_index = start_byte;

	//	Lcd_Write_Command(0x06);

		disp_value = message[byte_index++];
		byte_index %= scroll_message_length;
		display_character_with_start_bit(4, 0, start_bit, 8, disp_value, DISP_NOR);

		if(start_bit < 7)
		{
			for(i = 1; i < 16; i++)
			{
				disp_value = message[byte_index++];
				byte_index %= scroll_message_length;
				display_character_with_start_bit(4, 8 * i - start_bit, 0, 8, disp_value, DISP_NOR);
			}
		
			disp_value = message[byte_index++];
			byte_index %= scroll_message_length;
			display_character_with_start_bit(4, 8 * i - start_bit, 0, 4 + start_bit, disp_value, DISP_NOR);
		}
		else // if(start_bit == 7)
		{
			for(i = 1; i < 17; i++)
			{
				disp_value = message[byte_index++];
				byte_index %= scroll_message_length;
				display_character_with_start_bit(4, 8 * i - start_bit, 0, 8, disp_value, DISP_NOR);
			}
		
			disp_value = message[byte_index++];
			byte_index %= scroll_message_length;
			display_character_with_start_bit(4, 8 * i - start_bit, 0, start_bit - 2, disp_value, DISP_NOR);
		}

	//	Lcd_Write_Command(0x07);

		start_bit++;
		if(start_bit >= 8)
		{
			start_bit = 0;
			start_byte++;
			start_byte %= scroll_message_length;
		}
	}
}

U8_T bl_timer = 0;
void start_back_light(U8_T timer)
{
	if(isColorScreen == false)
	{
		if(timer == 0) BL_OFF();
		else BL_ON();
		bl_timer = timer;
		bl_timer_start = xTaskGetTickCount();
	}
	else
		BL_OFF();
}


void poll_back_light(void)
{
	if(isColorScreen == false)
	{
		if((bl_timer!=0)&&(bl_timer!=0xff))
		{
			bl_timer_end = xTaskGetTickCount();
			if((bl_timer_end - bl_timer_start) >= (bl_timer * SWTIMER_COUNT_SECOND))
			{
				BL_OFF();
				bl_timer = 0;
			}
		}
	}
}


static void lcd_gpio_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10 | GPIO_Pin_11 | GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOE, &GPIO_InitStructure);
	GPIO_SetBits(GPIOE, GPIO_Pin_10 | GPIO_Pin_11 | GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15);
}

void Lcd_Initial(void)
{
	lcd_gpio_init();
	
	LCD_RST = 0;
	delay_ms(50);
	LCD_RST = 1;
	delay_ms(10);

	Lcd_Set_Fuction(1); // 0x21	
	delay_us(10);

	Lcd_Write_Command(CMD_SET_BIAS);
	delay_us(10);
		
	Lcd_Write_Command(CMD_SET_V0);
	delay_us(10);

	Lcd_Write_Command(CMD_DISPLAY_CONFIG);
	delay_us(10);

	Lcd_Set_Fuction(0); // 0x20
	delay_us(10);

	Lcd_Write_Command(CMD_SET_V0Range_HIGH);    
	Lcd_Write_Command(CMD_DISPLAT_NORMAL);
	//Lcd_Write_Command(CMD_DISPLAY_INVERSE);
	Lcd_Set_X_Addr(0);  //0xf0 0xe0
	Lcd_Set_Y_Addr(0);  //0x40

	delay_us(10);
	Lcd_Full_Screen(0);
}


void itoa(uint16 num, uint8 *p, uint8 dot)
{
	uint8 i = 0;
	if(num / 10000)
	{
		p[i++] = num / 10000 + '0';
		num %= 10000;

		p[i++] = num / 1000 + '0';
		num %= 1000;

		p[i++] = num / 100 + '0';
		num %= 100;

		p[i++] = num / 10 + '0';
		num %= 10;
	}
	else if(num / 1000)
	{
		p[i++] = num / 1000 + '0';
		num %= 1000;

		p[i++] = num / 100 + '0';
		num %= 100;

		p[i++] = num / 10 + '0';
		num %= 10;
	}
	else if(num / 100)
	{
		p[i++] = num / 100 + '0';
		num %= 100;

		p[i++] = num / 10 + '0';
		num %= 10;
	}
	else if(num / 10)
	{
		p[i++] = num / 10 + '0';
		num %= 10;
	}

	p[i++] = num + '0';
	p[i] = '\0';

	if(dot)
	{
		uint8 j;

		if(dot >= i)
		{
			i++;
			for(j = 0; j < i; j++)
				p[i - j] = p[i - j - 1];

			p[0] = '0';
		}

		for(j = 0; j < (dot + 1); j++)
			p[i - j + 1] = p[i - j];

		p[i - dot] = '.';
	}
}

void reset_main_net_status_counter(void)
{
	main_net_status_ctr = 10;
}

void poll_main_net_status(void)
{
	if(main_net_status_ctr)
		main_net_status_ctr--;
}

#endif   //(DOT_MATRIX_SCREEN)
