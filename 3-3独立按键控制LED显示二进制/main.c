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
	unsigned char lednum=0;
	while(1)
	{
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			
			lednum++;
			P2=lednum;
			if(lednum>64)//针对程序自行补充的代码
			{
				lednum=0;
			}
		}
	}
}
