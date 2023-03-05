#include "main.h"

/**
  * leet - encodes a string into 1337
  * @n: the input string
  *
  * Return: ponter to encoded string
  */

char *leet(char *n)
{
	/* array of encoded items */
	int incodes[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	/* array of target letters to be encoded */
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int cnt = 0, i;

	while (n[cnt] != '\0')
	{
		/* at each letter of string loop in letter[] to find if shoud be incoded */
		for (i = 0; i < 10; i++)
		{
			if (n[cnt] == letters[i])
			{
				/* if found match, replace letter in string with encoded one */
				n[cnt] = incodes[i];
				/* break from the second loop, the mathcing loop */
				break;
			}
		}
		cnt++;
	}
	return (n);
}
