#include<avr/io.h>
#include<util/delay.h>
//#include "led.h"

int main(void)
{
DDRB|= (1<<PB0); //for LED 1

DDRD&=~(1<<PD0); //CLEAR BIT
DDRD&=~(1<<PD1); //CLEAR BIT
PORTD|=(1<<PD0); //SET BIT
PORTD|=(1<<PD1);
while(1)
    {  if(!(PIND&(1<<PD0))&& !(PIND&(1<<PD1)) ) //IF BOTH SWITCHES PRESSED
    {
        PORTB|=(1<<PB0); //LED 1
        _delay_ms(20);
    }
    else{
        PORTB&=~(1<<PB0); //LED 0
        _delay_ms(2000);
    }
    }
return 0;

}