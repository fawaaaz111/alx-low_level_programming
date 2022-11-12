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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
