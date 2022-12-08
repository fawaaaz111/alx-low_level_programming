#include "main.h"

/**
  * puts_half - print the second hald of string
  * @str: input string
  *
  * Return: None
  */

void puts_half(char *str)
{
	/* first get the length */
	int len = 0, spt;

	while (str[len] != '\0')
	{
		len++;
	}
	/* if len is odd , consider the half from length -1 */
	if (len % 2)
		spt = len / 2;
	else
		spt = (len - 1) % 2;

	for (spt; spt <= len; spt++)
		_putchar(*(str + spt));

	_putchar('\n');
}
