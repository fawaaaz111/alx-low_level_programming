#include <stdio.h>

/**
 * main - print from 0 to 9 usuing 'putchar'
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
