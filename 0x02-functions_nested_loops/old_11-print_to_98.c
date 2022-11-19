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
	int cnt, cond; /* counter hold n argument */

	cond = n >= 98;
	cnt = n;
	do {
		printf("%d", cnt);
		if (cnt != 98)
			printf(", ");
		cond ? cnt-- : cnt++;
	} while (cnt != 98);
	putchar('\n');
}
