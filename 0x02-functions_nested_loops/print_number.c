#include "main.h"

/**
  * print_number - print the number of 2 or 3 digits
  * @con: the row counter
  * @time: number of time to multiply
  * Return: none
  */

void print_number(int con, int time)
{
	int number = con * time;

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
	if (time != n)
	{
		_putchar (',');
	}
}
