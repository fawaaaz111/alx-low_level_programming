#include "main.h"

/**
  * _strncat - this is a fuction strcat
  * @dest: first parameter
  * @src: second parameter
  * @n: number of characters to take from str
  *
  * Return: a string
  */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	/* reach the end of destination passage */
	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
