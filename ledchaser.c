#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
  void main()
  {
     DDRD=0XFF;
    while(1)
	{
	   PORTD=0b10000000;
	   _delay_ms(100);
	   PORTD=0b11000000;
	   _delay_ms(100);
	   PORTD=0b11100000;
	   _delay_ms(100);
	   PORTD=0b11110000;
	   _delay_ms(100);
	   PORTD=0b11111000;
	   _delay_ms(100);
	   PORTD=0b1111100;
	   _delay_ms(100);
	   PORTD=0b11111110;
	   _delay_ms(100);
	   PORTD=0b11111111;
	   _delay_ms(100);
     
	 
	 }
}
	 
