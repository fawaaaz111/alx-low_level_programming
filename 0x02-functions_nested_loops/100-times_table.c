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
		/**
					      * mid is the middle if 3 digi
					      * number
					      */

		con = n;

		for (con = 0 ; con <= n ; con++)
		{
			for (time = 0 ; time <= n ; time++)
			{
				print_number(con, time, n);
			}
		_putchar('\n');
		}
	}
}

/**
  * print_number - print the number of 2 or 3 digits
  * @con: the row counter
  * @time: number of time to multiply
  * @n: the number to get time table from
  * Return: none
 */

void print_number(int con, int time, int n)
{
	int number = con * time;
	int fir, sec, length, num = number;

	length = 0;
	do {
		++length;
		numb /= 10;
	} while (numb);
		fir = number / 10;
		sec = number % 10;

		if (fir != 0)
		{
			_putchar(' ');
			if (length > 2)
			{
				int mid = (number / 10) % 10;

				_putchar(fir + '0');
				_putchar(mid + '0');
				_putchar(sec + '0');
			}
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

		if (time != n)
			_putchar (',');
}
