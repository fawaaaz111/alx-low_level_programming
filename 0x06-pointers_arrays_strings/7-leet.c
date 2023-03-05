#include "main.h"

/**
  * leet - encodes a string into 1337
  * @n: the input string
  *
  * Return: ponter to encoded string
  */

char *leet(char *n)
{
	int incodes[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int cnt = 0;

	while (n[cnt] != '\0')
	{
		for (int i = 0; i < 10; i++)
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
