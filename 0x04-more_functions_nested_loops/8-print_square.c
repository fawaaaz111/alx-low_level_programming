#include "main.h"

/**
  * print_square - print a square of itmes
  * @size: size of the square
  *
  * Return: None
  */

void print_square(int size)
{
	if (size > 0)
	{
		int j, i;

		for (i = 1 ; i <= size ; i++)
		{
			j = 1;
			while (j <= size)
			{
				putchar('#');
				j++;
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
