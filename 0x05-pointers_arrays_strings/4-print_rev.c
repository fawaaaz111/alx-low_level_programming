#include "main.h"

/**
  * print_rev - print reverse of a string
  * @s: the string provided
  *
  * Return: None
  */

void print_rev(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}

	while (*s)
	{
		len--;
		_putchar(*(s + len));
		s--;
	}
	_putchar('\n');
}
