#include "main.h"

/**
  * more_numbers = print 10 times , from 0 to 14
  *
  * Return: None
  */

void more_numbers(void)
{
	int i, j;

	for (i = 1 ; i <= 10 ; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
	}
}
