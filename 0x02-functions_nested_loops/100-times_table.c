#include "main.h"

/**
  * print_times_table - print time table between 0 and 15
  * @n : the number intered
  *
  * Return : none
  */

void print_times_table(int n)
{
	if (!(n < 0 || n > 15))
	{
		int con, time; /* initilaize row counter,and time number */
		int number, fir, sec, mid;
		/**
					      * mid is the middle if 3 digi
					      * number
					      */

		con = n;

		for (con = 0 ; con <= n ; con++)
		{
			for (time = 0 ; time <= n ; time++)
			{
				print_number(con, time);
			}
		_putchar('\n');
		}
	}
}

/**
  * print_number - print the number of 2 or 3 digits
  * @con: the row counter
  * @time: number of time to multiply
  * Return: none
 */

void print_number(int con, int time)
{
	int number = con * time;
	int fir, sec;

	fir = number / 10;
	sec = number % 10;

	if (fir != 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(fir + '0');
		_putchar(sec + '0');
	}
	else
	{
		if (time != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
	_putchar(sec + '0');
	}
	if (time != 0)
	{
		_putchar (',');
	}
}
