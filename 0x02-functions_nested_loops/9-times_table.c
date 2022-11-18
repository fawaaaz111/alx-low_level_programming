#include "main.h"

/**
 * times_table - pritn 9 times table
 *
 * Return: the table 9 times
 */

void times_table(void)
{
	int con, time, res; /** counter for repeatition and time */
	int first, second;

	for (con = 0; con <= 9; con++)
	{
		for (time = 0; time <= 9; time++)
		{
			res = con * time;

			first = res / 10;
			second = res % 10;

			if (first != 0)
			{
				_putchar(first + '0');
				_putchar(second + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(second + '0');
			}
		if (time != 9)
		{
			_putchar(',');
		}
		}
	_putchar('\n');
	}
}
