#include "main.h"

/**
  * _atoi  - convert a string to integer
  * @s: the input string
  *
  * Return: converted integer
  */

int _atoi(char *s)
{
	unsigned int i, opt = 0; /* counter for loop and the output */
	unsigned int sign = 1;

	/* loop till first number to set the sign */
	i = 0;
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	/* find just the first set of number */
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
		/* shift original number by one to the left first the add */
			opt = opt * 10 + (s[i] - '0');
		/* check next item if a number 'continue loop' or not 'break */
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	return (opt * sign);
}
