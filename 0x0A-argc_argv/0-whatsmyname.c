#include <stdio.h>

/**
 * main - main function
 * @argc: size of argv
 * @argv: array
 * Return: array
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
