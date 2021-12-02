#include "switch.h"
#include<avr/io.h>

void floatSwitchInit(void)
{
	/* top sensor */
	DDRD &= ~(1<<0);	//set pinD0 as input
	PORTD |= (1<<0); //use pull-up resistor on pinD0
	
	/* bottom sensor */
	DDRD &= ~(1<<1);	//set pinD1 as input
	PORTD |= (1<<1); //use pull-up resistor on pinD1
}
