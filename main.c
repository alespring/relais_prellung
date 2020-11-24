#include <stdlib.h>
#include <avr/io.h>
#include "lcd.h"   //" = Lib in akt Projektverzeichnis
#include <avr/interrupt.h>

#ifndef F_CPU
#define F_CPU    8000000
#endif





ISR(TIMER1_OVF_vect)
{
	
	
}


int main(void)
{
	
		//konfiguration Timer overflow
	
	//TCCR1A		= 0x00;
	TCCR1B		= 0x01;
	TIMSK1		= 0x01;	
	
			
	
	
	

	
	
	

						
	while(1)
	{
	
	}//end of while
	return 0;
}//end of main


