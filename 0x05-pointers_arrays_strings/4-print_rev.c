#include "main.h"

/**
  * print_rev - print reverse of a string
  * @s: the string provided
  *
  * Return: None
  */

void print_rev(char *s)
{
	while (*s)
	{
		*s = 0;
		_putchar(--*s);
	}
	_putchar('\n');
}
