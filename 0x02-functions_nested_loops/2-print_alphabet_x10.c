#include "main.h"

/**
  * print_alphabet_x10 - pritn alphabet in lowercase
  * Return: Void
  */

void print_alphabet_x10(void)
{
	int i; /* conter for FORLOOP */

	for (i = 0; i <= 10; i++)
	{
		char cont = 'a'; /* counter for control the process */

		while (cont != ('z' + 1))
		{
			_putchar(cont);
			cont++;
		}
		if (i != 10)
		{
			_putchar('\n');
		}
	}
}
