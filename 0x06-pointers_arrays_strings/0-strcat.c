#include "main.h"

/**
* _strcat - this is a function strcat
* @dest: first param
* @src: second param
* Return: a string
*/

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
