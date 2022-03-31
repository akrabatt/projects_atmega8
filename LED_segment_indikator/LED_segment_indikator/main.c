#define F_CPU 1000000UL // принудительно объявляем, что частота МК = 1Мгц
#include <avr/io.h>
#include <util/delay.h> // подключаем библиотеку задерки времени
#define sec 200 // определяем значение времени
#define LEDS_D PORTD    // назовем порт D для светодиодов
#define LEDS_B PORTB    // назовем порт B для светодиодов
#define BUTTON PORTC    // назовем порт С для кнопок 


int main(void)
{
    while (1) 
    {

    }
}

