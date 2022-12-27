#include "main.h"

/**
  * print_triangle - print atriangle shape
  * @size: shape of triangle
  *
  * Return: None
  */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j; /* cuonter for lines and shapes */

		i = 0;
		while (i < size)
		{
			for (j = 1 ; j <= size ; j++)
			{
				if (j < size - i)
					putchar(' ');
				else
					putchar('#');
			}
			i++;
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
