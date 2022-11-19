#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - pritn from input number to 90
 * @n: the input
 *
 * Return: Void
 */

void print_to_98(int n)
{
	int cnt; /* counter hold n argument */

	if (n <= 98)
	{
		for (cnt = n ; cnt <= 98 ; cnt++)
		{
			printf("%d", cnt);
			if (cnt != 98)
				printf(", ");
		}
	}
	else
	{
		for (cnt = n ; cnt >= 98; cnt--)
		{
			printf("%d", cnt);
			if (cnt != 98)
				printf(", ");
		}
	}
	putchar('\n');
}
