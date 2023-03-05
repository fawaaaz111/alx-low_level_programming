#include "main.h"

/**
  * leet - encodes a string into 1337
  * @n: the input string
  *
  * Return: ponter to encoded string
  */

char *leet(char *n)
{
	int incodes[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int cnt = 0, i;

	while (n[cnt] != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (n[cnt] == letters[i])
			{
				n[cnt] = incodes[i];
				break;
			}
		}
		cnt++;
	}
	return (n);
}
