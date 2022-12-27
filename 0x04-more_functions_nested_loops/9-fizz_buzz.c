#include <stdio.h>

/**
  * main - print fizz buzz test
  *
  * Return: None
  */

int main(void)
{
	int i; /* loop counter */


	printf("1");
	for (i = 2 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
