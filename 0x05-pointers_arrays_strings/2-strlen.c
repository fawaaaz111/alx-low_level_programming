#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s : the string given
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}
