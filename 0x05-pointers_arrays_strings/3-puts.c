#include "main.h"

/**
  * _puts - print a string to stdout
  * @str: the input string
  *
  * Return: void
  */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
