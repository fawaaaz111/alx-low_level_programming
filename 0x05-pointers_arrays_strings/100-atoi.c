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
	int sign_count = 0, sign = 1;

	for (i = 0 ; s[i]  !='\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
		else
		{
			if (s[i] == '-')
				sing_count++;
		}
		if ((sing_count % 2) != 0)
			sign = -1;
	}
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
	return (opt + sign);
}
