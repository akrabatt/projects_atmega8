#define F_CPU 1000000UL // принудительно задаем частоту
#include <avr/io.h>


int main(void)
{
	DDRD = 0b11111111;
	PORTD = 0b00000000;
	
	//TCCR1B = (CS10 << 0) | (CS11 << 1);
	TCCR1B = 0b00000011;
	TCNT1 = 0; // обнуляем счетчик
	
    while (1) 
    {
		if (TCNT1 == 0)
		{
			PORTD = 0b00001111;
		}
		if (TCNT1 == 0xFFFF/2)
		{
			PORTD = 0b11110000;
		}
    }
}