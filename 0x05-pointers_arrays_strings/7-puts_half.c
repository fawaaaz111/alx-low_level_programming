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
	int i, len, spt;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	/* if len is odd , consider the half from length -1 */
	if (len % 2 == 0)
		spt = len / 2;
	else
		spt = (len - 1) / 2;

	for (i = spt; i < len; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
