#include "main.h"

/**
  * _atoi  - convert a string to integer
  * @s: the input string
  *
  * Return: converted integer
  */

int _atoi(char *s)
{
	int i, opt = 0; /* counter for loop and the output */

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-' || s[i - 1] == '+')
			{
				opt += _putchar(s[i - 1]);
			}
			opt += _putchar(s[i - 1]);
		}
	}
	return (opt);
}
