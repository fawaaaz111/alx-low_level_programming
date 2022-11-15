#include "main.h"

/**
  * print_last_digit - print last digit of a gieven number
  * @c: input charecter
  *
  * Return: the last digit computed
  */

int print_last_digit(int c)
{
	if (c >= 0)
	{
		c %= 10;
		_putchar(c + '0');

		return (c);
	}
	else
	{
		
		c %= 10;
		c = c * -1;
		_putchar(c + '0');

		return (c);
	}
}
