#include "main.h"

/**
  * print_triangle - print atriangle shape
  * @size: shape of triangle
  *
  * Return: None
  */

void print_triangle(int size)
{
	int i, j; /* cuonter for lines and shapes */

	i = 0;
	while (i < size)
	{
		for (j = 1 ; j <= size ; j++)
		{
			if (j < size - (i + 1))
				_putchar(' ');
			else
				_putchar('#');
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
