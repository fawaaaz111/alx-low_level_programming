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

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-' || s[i - 1] == '+')
			{
				opt += _putchar(s[i - 1]);
			}
			opt = opt * 10 + (s[i] - '0');
		}
		i++;
	}
	return (opt);
}
