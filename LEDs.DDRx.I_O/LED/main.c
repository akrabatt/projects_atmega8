#include <avr/io.h>


int main(void)
{
	DDRC = 0b00011111;	// обозначили порт С на выход
	DDRB = 0b11111111;	// обозначили порт С на выход(в данном случае каждый выход имеет низкий уровень)
						//и светодиоды, которые подключены катодом к выоду МК будут гореть
	//DDRB = 0b10001001;	// 
	//PINC = 0b00000001;	// подали высокий уровень сигнала на вывод
	
	
    while (1) 
    {
		PORTC = 0b00000111;	// подаем высокий уровень сигнала на выводы мк
    }
}

