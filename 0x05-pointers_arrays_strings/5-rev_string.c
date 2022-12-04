#include "main.h"

/**
  * rev_string - get the reverse of a string
  * @s: th input string
  *
  * Return: None
  */

void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (*s != 0)
	{
		s++;
		len++;
	}

	for (i = 0 ; i < len / 2 ; i++)
	{
		/* temp var uses to temporary holds the string */
		temp = *(s + i);
		*(s + i) = *(s + (len - 1 - i));
		*(s + (len - 1 - i)) = temp;
	}
}
