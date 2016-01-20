#include"Beep.h"

//持续时间
uint beepDuration=10;

//计数器
uint beepCounter=0;

//标志变量
bit beepFlag=0;

//蜂鸣器持续时间(多少次循环)
void BeepSet(uint x)
{
	beepDuration=x;
}

//蜂鸣器运行，在main里调用
void BeepRun()
{
	if(beepFlag)
	{
		if(beepCounter<beepDuration)
		{
			//在持续时间内，蜂鸣器响
			Beep=!Beep;
		}
		else
		{
			//超出持续时间，蜂鸣器停止，计数器清零，标志变量置零
			Beep=1;
			beepCounter=0;
			beepFlag=0;
		}
		//蜂鸣器启动的时候，计数器+1
		beepCounter++;
	}
	else
	{
		//蜂鸣器停止的时候，计数器清零
		Beep=1;
		beepCounter=0;
	}
}

//蜂鸣器打开
void BeepON()
{
	beepFlag=1;
}

//蜂鸣器关闭
void BeepOFF()
{
	beepFlag=0;
}
