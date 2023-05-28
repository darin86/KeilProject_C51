#include <REGX52.H>
#include "Delay.h"

unsigned char MatrixKey()
{
     unsigned char KeyNumber=0;

     P1=0xFF;
     P1_3=0;
     if(P1_7==0)//S1
     {
          Delay(20);
          while(P1_7==0);
          KeyNumber=1;
     }

     return KeyNumber;
}