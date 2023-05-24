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
	char key;
	while(1)
	{
		while(1)
		{
			if(P3_1==0)
			{
				Delay(20);
				while(P3_1==0);
				Delay(20);
				key=0;
				break;
			}
			else if(P3_0==0)
			{
				Delay(20);
				while(P3_0==0);
				Delay(20);
				key=1;	
				break;
			}
			else if(P3_2==0)
			{
				Delay(20);
				while(P3_2==0);
				Delay(20);
				key=2;	
				break;
			}
			else if(P3_3==0)
			{
				Delay(20);
				while(P3_3==0);
				Delay(20);
				key=3;	
				break;
			}
		}
		switch(key)
		{
			case 0:
				while(1)
				{
					P2=0xFE;//1111 1110
					Delay(500);
					P2=0xFD;//1111 1101
					Delay(500);
					P2=0xFB;//1111 1011
					Delay(500);
					P2=0xF7;//1111 0111
					Delay(500);
					P2=0XEF;//1110 1111
					Delay(500);
					P2=0xDF;//1101 1111
					Delay(500);
					P2=0xBF;//1011 1111
					Delay(500);
					P2=0x7F;//0111 1111
					Delay(500);
				}
		
			case 1:
				while(1)
				{
					P2=0xFE;//1111 1110
					Delay(250);
					P2=0xFD;//1111 1101
					Delay(250);
					P2=0xFB;//1111 1011
					Delay(250);
					P2=0xF7;//1111 0111
					Delay(250);
					P2=0XEF;//1110 1111
					Delay(250);
					P2=0xDF;//1101 1111
					Delay(250);
					P2=0xBF;//1011 1111
					Delay(250);
					P2=0x7F;//0111 1111
					Delay(250);
				}
	
			case 2:
				while(1)
				{
					P2=0xFE;
					Delay(100);
					P2=0xFD;
					Delay(100);
					P2=0xFB;
					Delay(100);
					P2=0xF7;
					Delay(100);
					P2=0XEF;
					Delay(100);
					P2=0xDF;
					Delay(100);
					P2=0xBF;
					Delay(100);
					P2=0x7F;
					Delay(100);
			}
		}
	}
}