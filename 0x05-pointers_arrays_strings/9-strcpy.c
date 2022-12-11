#include "main.h"

/**
  * _strcpy - copy a string to another one
  * @src: the string to be copy
  * @dest: the copied string
  *
  * Return: pointer to the copied string
  */

char *_strcpy(char *dest, char *src)
{
	int cnt; /* counter */

	cnt = 0;
	while (src[cnt] != '\0')
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	dest[cnt] = '\0';
	return (dest);
}
