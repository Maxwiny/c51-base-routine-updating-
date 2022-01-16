#include "led/led.h"


void delay();

void main()
{
	TMOD = 0X01;
	TH0 = -9;
	TR0 = 1;
	ET0 = 1;
	EA = 1;
	while (1)
	{
		led_liushui();
	}
}