#include <stdio.h>

/**
  * main - print even-valued fibonacci under 4,000,000
  *
  * Return: 0 on success
  */

int main(void)
{
	int i; /* counter i of the numbers */
	long int pre = 2, n_pre = 1, num = 0, sum = 0;
	/* previous and next previous number */

	i = 1;
	while (i > 0)
	{
		if (i == 1 || i == 2)
		{
			num = i;
		}
		else
		{
			num = pre + n_pre;
			n_pre = pre;
			pre = num;
		}

		if (num <= 4000000)
		{
			if ((pre % 2) == 0)
			{
				sum += pre;
			}
			else
			{
				continue;
			}
		}
		else
		{
			break;
		}
		i++;
	}
	printf("%ld\n", sum - 2);
	return (0);
}
