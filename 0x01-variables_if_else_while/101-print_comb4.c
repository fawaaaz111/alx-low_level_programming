#include <stdio.h>

/**
* * main - prints all possible different combinations of three digits.
* Return: 0 on success
*/

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48 ; a <= 55 ; a++)
	{
		for (b = 49 ; b <= 56 ; b++)
		{
			for (c = 50 ; c <= 57 ; c++)
			{
				if (a >= b || b >= c)
				{
					continue;
				}
				else
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == 55 && b == 56 && c == 57)
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
	}
	putchar('\n');
	return (0);
}
