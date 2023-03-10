#include <stdio.h>

/**
 * main - main function
 * @argc: size of argv
 * @argv: array
 * Return: array
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
