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
		return (c + '0');
	}
	else
	{
		c *= -1;
		c %= 10;
		return (c + '0');
	}
}
