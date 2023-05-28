#include <REGX52.H>
#include "Delay.h"
/**
  * @brief 矩阵键盘读取按键键码
  * @param 无
  * @retval KeyNumber 按下按键的键码值 
  */
unsigned char MatrixKey()
{
     unsigned char KeyNumber=0;
     //第一列开始扫描
     P1=0xFF;
     P1_3=0;
     if(P1_7==0)//S1
     {Delay(20);while(P1_7==0);Delay(20);KeyNumber=1;}
     if(P1_6==0)//S5
     {Delay(20);while(P1_6==0);Delay(20);KeyNumber=5;}
     if(P1_5==0)//S9
     {Delay(20);while(P1_5==0);Delay(20);KeyNumber=9;}
     if(P1_4==0)//S13
     {Delay(20);while(P1_7==0);Delay(20);KeyNumber=13;}
     //第二列开始扫描

     P1=0xFF;
     P1_2=0;
     if(P1_7==0)//S2
     {Delay(20);while(P1_7==0);Delay(20);KeyNumber=2;}
     if(P1_6==0)//S6
     {Delay(20);while(P1_6==0);Delay(20);KeyNumber=6;}
     if(P1_5==0)//S10
     {Delay(20);while(P1_5==0);Delay(20);KeyNumber=10;}
     if(P1_4==0)//S14
     {Delay(20);while(P1_7==0);Delay(20);KeyNumber=14;}

     //第三列开始扫描
     P1=0xFF;
     P1_1=0;
     if(P1_7==0)//S3
     {Delay(20);while(P1_7==0);Delay(20);KeyNumber=3;}
     if(P1_6==0)//S7
     {Delay(20);while(P1_6==0);Delay(20);KeyNumber=7;}
     if(P1_5==0)//S11
     {Delay(20);while(P1_5==0);Delay(20);KeyNumber=11;}
     if(P1_4==0)//S15
     {Delay(20);while(P1_7==0);Delay(20);KeyNumber=15;}

     //第四列开始扫描
     P1=0xFF;
     P1_0=0;
     if(P1_7==0)//S4
     {Delay(20);while(P1_7==0);Delay(20);KeyNumber=4;}
     if(P1_6==0)//S8
     {Delay(20);while(P1_6==0);Delay(20);KeyNumber=8;}
     if(P1_5==0)//S12
     {Delay(20);while(P1_5==0);Delay(20);KeyNumber=12;}
     if(P1_4==0)//S16
     {Delay(20);while(P1_7==0);Delay(20);KeyNumber=16;}

     return KeyNumber;
}