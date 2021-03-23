/*
 * main.c
 *
 * Created: 3/22/2021 9:30:11 PM
 *  Author: Blaine
 */ 

#define F_CPU 1000000UL

#include <xc.h>
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	
	DDRB |= 0x3F;
	
    while(1)
    {
		PORTB = '1';
		_delay_ms(10000);
		
		PORTB = '1';
		_delay_ms(10000);	
		
		
    }
}