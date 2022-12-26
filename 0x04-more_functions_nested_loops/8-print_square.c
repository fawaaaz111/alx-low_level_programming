#include "main.h"

/**
  * print_square - print a square of itmes
  * @size: size of the square
  *
  * Return: None
  */

void print_square(int size)
{
	int j, i;

	for (i = 1 ; i <= size ; i++)
	{
		j = 1;
		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
