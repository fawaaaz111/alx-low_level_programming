#include "main.h"

/**
  * print_sign - prin tthe sign of the charecter
  * @n: input charecter
  *
  * Return: 1, if it is (+), 0 if it (0)
  * -1 if it is (-)
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
