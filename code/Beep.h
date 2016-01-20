#ifndef _Beep_h_
#define _Beep_h_

#include<reg52.h>

#ifndef uchar
#define uchar unsigned char
#endif

#ifndef uint
#define uint unsigned int
#endif

sbit Beep=P2^7;

//蜂鸣器持续时间(多少次循环)
void BeepSet(uint);

//蜂鸣器运行，在main里调用
void BeepRun();

//蜂鸣器打开
void BeepON();

//蜂鸣器关闭
void BeepOFF();

#endif
