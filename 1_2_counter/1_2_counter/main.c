#define F_CPU 1000000UL // принудительно задаем частоту
#include <avr/io.h>


int main(void)
{
	
	TCCR1B = (CS10 << 0) | (CS11 << 1);
	
	
    while (1) 
    {
		
    }
}

