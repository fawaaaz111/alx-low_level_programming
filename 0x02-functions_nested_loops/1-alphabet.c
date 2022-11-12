#include "main.h"

/**
  * print_alphabet - pritn alphabet in lowercase
  * Return: Void
  */

void print_alphabet(void)
{
	char cont = 'a'; /* counter for control the process */

	while (cont != 'z')
	{
		_putchar(cont);
		cont++;
	}
	_putchar('\n');
}
