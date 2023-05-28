#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"
#include "Changenum.h"

unsigned char KeyNum;
unsigned int Password,Count;

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"Password:");
	while(1)
	{
		KeyNum=changenum(MatrixKey());  //更改键盘布局后，9宫格
		//KeyNum=MatrixKey();

		if(KeyNum)
		{
			if(KeyNum<=10)	//输入密码
			{
				if(Count<4)	//如果输入次数小于4
				{
					Password*=10;				//密码左移一位
					Password+=KeyNum%10;		//获取一位密码
					Count++;
				}
				LCD_ShowNum(2,1,Password,4);	//更新显示
			}
			if(KeyNum==11)	//确认
			{
				if(Password==2345)
				{
					LCD_ShowString(1,14,"OK ");	
					Password=0;	
					Count=0;
					LCD_ShowNum(2,1,Password,4);	//更新显示
				}
				else
				{
					LCD_ShowString(1,14,"ERR");	
					Password=0;
					Count=0;
					LCD_ShowNum(2,1,Password,4);	//更新显示
				}
			}
			if(KeyNum==12)	//取消
			{
				Password=0;
				Count=0;
				LCD_ShowNum(2,1,Password,4);	//更新显示
			}
		}
	}
}