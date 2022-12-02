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

	while (*(s + len) != 0)
	{
		len++;
	}

	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
