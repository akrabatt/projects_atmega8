#define F_CPU 1000000UL // принудительно объявляем, что частота МК = 1Мгц
#include <avr/io.h>
#include <util/delay.h> // подключаем библиотеку задерки времени

#define sec 400 // определяем значение времени
#define LEDS_D PORTD    // назовем порт D для светодиодов
#define LEDS_B PORTB    // назовем порт B для светодиодов
#define BUTTON PORTC    // назовем порт С для кнопок 

int nums[] = {0b00111111, 0b00000110, 0b01011011,
			 0b01001111, 0b01100110, 0b01101101,
			 0b01111101, 0b000000111, 0b01111111,
			 0b01101111};

int main(void)
{
	DDRD = 0b11111111;
	
	
    while (1) 
    {
		for(int i = 0; i <= 9; PORTD = nums[i++])
		{
			_delay_ms(sec);
		}
    }
}

