#include "main.h"

/**
 * times_table - pritn 9 times table
 *
 * Return: the table 9 times
 */

void times_table(void)
{
	int con, time; /** counter for repeatition and time */

	for (con = 0; con <= 9; con++)
	{
		for (time = 0 time <= 9; time++)
		{
			res = con * time;
			_putchar(res + '0');

			if (time != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('$');
	_putchar('\n');
	}
}
