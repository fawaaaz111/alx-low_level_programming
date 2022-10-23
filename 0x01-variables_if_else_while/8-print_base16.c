#include <stdio.h>

/**
 * main - print all digits in base 16
 * Return: 0 on success
 */

int main(void)
{
	int i;
	char ch;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
