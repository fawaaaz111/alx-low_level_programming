#include "main.h"

/**
  * _strcmp - compare two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: 0 if equals, positive or negative otherwise
  */

int _strcmp(char *s1, char *s2)
{
	int i, res;

	i = 0;
	while (i >= 0)
	{
		res = s1[i] - s2[i];
		if (res != 0 || (s1[i] == '\0' && s2[i] == '\0'))
			break;
		i++;
	}
	return (res);
}
