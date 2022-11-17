#include "main.h"

/**
* jack_bauer - pritn all minutes of a day
*
* Return: all the minutes and hours
*/

void jack_bauer(void)
{
	int H, M; /* stands for hours, minutes */
	int first_H, second_H, first_M, second_M;

	H = 0;
	while (H <= 2)
	{
		M = 0;
		while (M <= 59)
		{
			first_H = H / 10;
			second_H = H % 10;
			first_M = M / 10;
			second_M = M % 10;

			_putchar(first_H + '0');
			_putchar(second_H + '0');
			_putchar(':');
			_putchar(first_M + '0');
			_putchar(second_M + '0');

			_putchar('\n');
			M++;
		}
	H++;
	}
}
