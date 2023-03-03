#include "main.h"

/**
  * string_toupper - change lowercase character to upper
  * @c: input string
  *
  * Return: pointer to string in uppercase
  */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
/* if any character is lower on ascci code then add 32 to convert it to upper*/
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
		i++;
	}
	return (c);
}
