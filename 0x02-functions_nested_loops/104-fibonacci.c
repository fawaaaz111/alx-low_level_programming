#include <stdio.h>

/**
  * main - prints first 98 fibonacci numbers
  *
  * Return: 0 on success
  */

int main(void)
{
	int i; /* counter */
	long int pre = 2, n_pre = 1, num;
	/* previous and next previous number */

	printf("%ld, %ld", n_pre, pre);
	for (i = 0; i < 96; i++)
	{
		num = pre + n_pre;
		printf(", %ld", num);
		n_pre = pre;
		pre = num;
	}
	printf("\n");
	return (0);
}
