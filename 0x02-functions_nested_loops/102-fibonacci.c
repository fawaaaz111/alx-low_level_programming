#include <stdio.h>

/**
  * main - print 50 Fibonacci sequence
  *
  * Return: 0 on success
  */

int main(void)
{
	int i, num; /* counter i and the number */
	int pre = 2, n_pre = 1; /* previous and next previous number */

	i = 1;
	while (i <= 50)
	{
		if (i == 1 || i == 2)
		{
			num = i;
			printf("%d, ", num);
		}
		else
		{
			num = pre + n_pre;
			printf("%d", num);
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
