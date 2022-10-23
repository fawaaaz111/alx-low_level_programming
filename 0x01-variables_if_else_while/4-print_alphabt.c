#include <stdio.h>

/**
 * main - prints alphabet in lower case exept 'q' and 'e'
 *
 * Return: 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;

		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
