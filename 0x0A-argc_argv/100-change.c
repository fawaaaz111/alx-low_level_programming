#include <stdio.h>
#include <stdlib.h>

/**
  *divi - this function use recursion
  *@num:The number or argv[1]
  *@suma: the value to change un every recursion
  *Return: suma
  *On error, -1 is returned, and errno is set appropriately.
  */
int divi(int num, int suma)
{
	int i;
	int array[5] = {25, 10, 5, 2, 1};

	if (num == 0)
		return (suma);
	for (i = 0 ; i < 5; i++)
	{
		if (num / array[i] != 0)
		{
			suma = suma + num / array[i];
			return (divi(num % array[i], suma));
		}
	}
	printf("hola");
	return (suma);
}

/**
  *main - print the name of the executable
  *@argc:The number of command line arguments
  *@argv: An array containing the program command line arguments (size of argc)
  *Return: 0
  *On error, -1 is returned, and errno is set appropriately.
  */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (atoi(argv[1]) <= 0)
		{
			printf("0\n");
		}
		else
			printf("%d\n", divi(atoi(argv[1]), 0));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
