#include "led.h"
#include "delay/delay.h"

/*��ˮ��*/
void led_moede1()
{
	int i;

	for (i=0; i<8; i++) 
	{
		P0=0X01<<i;
		Delay500ms();
	}
}