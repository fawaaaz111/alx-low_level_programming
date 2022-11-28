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
		int number, fir, sec, mid; /** 
					      * mid is the middle if 3 digi
					      * number 
					      */

		con = n;

		for (con = 0 ; con <= n ; con++)
		{
			for (time = 0 ; time <= n ; time++)
			{
				print_number(con , time);
			}
		_putchar('\n');
		}
	}
}
