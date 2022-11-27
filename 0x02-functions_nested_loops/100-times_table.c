#include "main.h"

/**
  * print_times_table - print time table between 0 and 15
  * @n : the number intered
  *
  * Return : none
  */

void print_times_table(int n)
{
	if !(n < 0 || n > 15)
	{
		int con, time; /* initilaize row counter,and time number */
		int number, fir, sec;

		con = n;

		for (con 0 ; con <= n ; con++)
		{
			for (time = 0 ; time <= n ; time++)
			{
				number = con * time;
				fir = number / 10;
				sec = number % 10;

				if (time != n)
				{
					_putcahr(',');
					if (fir != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{

						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(fir + '0');
					_putchar(sec + '0');
				}
				else
				{
					_putchar(fir + '0');
					_putchar (sec + '0');
				}

			}
		}
	}
}
