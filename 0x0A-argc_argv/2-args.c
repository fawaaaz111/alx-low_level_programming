#include <stdio.h>

/**
  * main - pritn the naem of the executable
  * @argc: The number of command line arguments
  * @argv: An array containign the program command
  * line arguments (size of argc)
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
