#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: 0 on seccess
 */

int main(void)
{
	int n;
	int j;

	for (n = 48 ; n <= 56 ; n++)
	{
		for (j = 49 ; j <= 57 ; j++)
		{
			if (j <= n)
			{
				continue;
			}
			else
			{
				putchar(n);
				putchar(j);
				if (n == 56 && j == 57)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
