#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers.
* Return: 0 on seccess
*/

int main(void)
{
	int n;
	int j;
	int x;
	int y;

	for (n = 48 ; n <= 57 ; n++)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			for (x = 48 ; x <= 57; x++)
			{
				for (y = 48 ; y <= 57 ; y++)
				{
					if ((n + j) >= (x + y))
					{
						continue;
					}
					else
					{
						putchar(n);
						putchar(j);
						putchar(' ');
						putchar(x);
						putchar(y);
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
