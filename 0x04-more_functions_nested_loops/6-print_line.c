#include "main.h"

/**
  * print_line - print (_) N times
  * @n: number of (_) to be printed
  *
  * Return: None
  */

void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 1 ; i <= n ; i++)
			_putchar('-');
	}
	_putchar('\n');
}
