#include "main.h"

/**
  * print_diagonal - print diagonal line
  * @n: numbers of line to be printed
  *
  * Return: None
  */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int j, i;

		for (i = 1 ; i <= n ; i++)
		{
			j = 1;
			while (j <= i)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
				j++;
			}
		}
	}
	else
		_putchar('\n');
}
