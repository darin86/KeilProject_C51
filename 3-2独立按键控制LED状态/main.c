#include <REGX52.H>

void Delay(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}

void main()
{
	while(1)
	{
		if(P3_1==0)
		{
			Delay(20);//延时过滤按下抖动
			while(P3_1==0);//当条件不满足时跳出循环
			Delay(20);//延时过滤松手抖动
			
			P2_0=~P2_0;
		}
	}
}
