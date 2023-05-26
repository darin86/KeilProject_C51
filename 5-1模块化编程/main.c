#include <REGX52.H>
#include "Delay.h"
#include "Nixie.h"
 
void main()
{
	while(1)
	{
		Nixie(1,2);
		Delay(1);
		Nixie(2,5);
		Delay(1);
		Nixie(3,0);
		Delay(1);
		Nixie(3,10);
		Delay(1);
	}
}