#include "main.h"

/**
  * argstostr - concatenates all the arguments of your program
  * @ac: number of arguments
  * @av: array of pointer to arguments strings
  *
  * Return: a pointer to the new string
  */

char *argstostr(int ac, char **av)
{
	char *s = NULL;
	int i, j, n;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;

		s = (char *)malloc(sizeof(char) * j);
		for (n = 0; av[i][n] != '\0'; n++)
		{
			if (av[i][n] == 32)
				s[n] = '\n';
			else
				s[n] = av[i][n];
		}
	}

	return (s);
}

