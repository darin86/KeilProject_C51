#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MartrixKey.h"
#include "Changenum.h"

unsigned char matrix,KeyNum,password;
int count;
void main()
{
    LCD_Init;
    LCD_ShowString(1,1,"PASSWORD");
    while(1)
    {	int z;
		//z=MatrixKey();
        //KeyNum=Changenum(z);
		KeyNum=MatrixKey;
		if(KeyNum<=10)
		{
			if(count<4)
			{
				password*=10;
				password+=KeyNum%10;
				count++;
			}
			LCD_ShowNum(2,1,password,4);
		}
		if(KeyNum==11)
		{
			if(password==1234)
			{
				LCD_ShowString(1,13,"OK ");
				while(1);
			}
			else
			{
				LCD_ShowString(1,13,"ERR");
				password=0;
				count=0;
				LCD_ShowNum(2,1,password,4);
			}

		}
		if(KeyNum==12)
		{
			password=0;
			count=0;
			LCD_ShowNum(2,1,password,4);
		}
    }
}

