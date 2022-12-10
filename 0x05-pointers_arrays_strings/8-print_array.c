#include "main.h"

/**
  * print_array - print n elements of an array of integers
  * @a: the array
  * @n: number of elements to be printed
  *
  * Return: None
  */

void print_array(int *a, int n)
{
	int cnt; /* counter */

	cnt = 0;
	while (cnt < n)
	{
		if (cnt != (n - 1))
			printf("%d, ", a[cnt]);
		else
			printf("%d\n", a[cnt]);
		cnt++;
	}
}
