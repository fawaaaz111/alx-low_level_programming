#include <stdio.h>

/**
  * main - computes and prints multiples
  * of 3 or 5
  *
  * Return: 0 on success
  */

int main(void)
{
	int i = 1, sum = 0;

	while (i < 1024)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			sum += i;
		i++;
	}
	printf("the sum is %d\n", sum);
	return (0);
}
