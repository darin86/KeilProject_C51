#include <REGX52.H>
#include "LCD1602.h"

void main()
{
    LCD_Init();
    LCD_ShowChar(1,1,'A');
    LCD_ShowString(1,3,"ERROR");
    while(1)
    {
    }
}