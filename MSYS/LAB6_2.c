#define F_CPU 16000000
#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
	DDRA = 0;				// PORTA benene er indgange
	DDRB = 0xFF;			// PORTB benene er udgange

	while (1)
	{
		switch (PINA)
		{
			case 0b01111111: {
				PORTB = ~PORTB;
				_delay_us(956);		// c
				break;
			}
			case 0b10111111: {
				PORTB = ~PORTB;
				_delay_us(851);		// D
				break;
			}
			case 0b11011111: {
				PORTB = ~PORTB;
				_delay_us(758);		// E
				break;
			}
			case 0b11101111: {
				PORTB = ~PORTB;
				_delay_us(716);		// F
				break;
			}
			case 0b11110111: {
				PORTB = ~PORTB;
				_delay_us(638);		// G
				break;
			}
			case 0b11111011: {
				PORTB = ~PORTB;
				_delay_us(568);		// A
				break;
			}
			case 0b11111101: {
				PORTB = ~PORTB;
				_delay_us(506);		// H
				break;
			}
			case 0b11111110: {
				PORTB = ~PORTB;
				_delay_us(478);		// C
				break;
			}
			default:{}
		}
	}
}
