#include <REGX52.H>
#include "Delay.h"
#include "Nixie.h"
 
void main()
{
	while(1)
	{
		Nixie(1,2);
		Nixie(2,5);
		Nixie(3,0);
		Nixie(3,10);
	}
}