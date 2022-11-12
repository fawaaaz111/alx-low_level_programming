#include <stdio.h>
#include <stdlib.h>
/**
  *main - print the name of the executable
  *@argc:The number of command line arguments
  *@argv: An array containing the program command line arguments (size of argc)
  *Return: 0
  *On error, -1 is returned, and errno is set appropriately.
  */

int main(int argc, char *argv[])
{
	int i, j;
	int suma;

	suma = 0;

	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			for (j = 0; argv[i][j] != '\0' ; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			suma = suma + atoi(argv[i]);
		}
		else
		{
			for (j = 0; argv[i][j] != '\0' ; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			suma = suma + atoi(argv[i]);
		}
	}
	printf("%d\n", suma);
	return (0);
}
