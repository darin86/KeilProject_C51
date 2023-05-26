#include <REGX52.H>
#include "Delay.h"
 
void main()
{
	while(1)
	{
		P2_6=1;
		Delay(500);
		P2_6=0;
		Delay(500);
	}
}