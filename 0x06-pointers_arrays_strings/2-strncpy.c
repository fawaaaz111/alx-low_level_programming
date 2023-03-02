#include "main.h"

/**
* _strncpy - copy a string from source to destination
* @dest: destination string
* @src: source string
* @n: limit of copy from src
*
* Return: a pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
