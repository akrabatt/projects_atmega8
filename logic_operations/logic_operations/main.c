#include <avr/io.h>


int main(void)
{
	DDRD = 0b11111111;
	DDRB |= (0 << 0);
	PORTB |= (1 << 0);
	
    while (1) 
    {
		if (~PINB & (1 << 0)) // если условие верное 
		{
			PORTD = (1 << 0);
		}
    }
}

