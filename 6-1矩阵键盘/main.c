#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MartrixKey.h"

unsigned char KeyNum;
void main()
{
    LCD_Init;
    LCD_ShowString(1,1,'MARTIXKEY');
    while(1)
    {
        KeyNum=MatrixKey();
        if(KeyNum)
        {
            LCD_ShowNum(2,1,KeyNum,2);
        }
    }
}