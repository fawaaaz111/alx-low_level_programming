#include <stdio.h>

/**
  * main - print 50 Fibonacci sequence
  *
  * Return: 0 on success
  */

int main(void)
{
	int i; /* counter i and the number */
	long int pre = 2, n_pre = 1, num;
	/* previous and next previous number */

	i = 1;
	while (i <= 50)
	{
		if (i == 1 || i == 2)
		{
			num = i;
			printf("%ld, ", num);
		}
		else
		{
			num = pre + n_pre;
			printf("%ld", num);
			if (i != 50)
			{
				putchar(',');
				putchar(' ');
			}
			n_pre = pre;
			pre = num;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
