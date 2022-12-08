#include "main.h"

/**
  * puts2 - print every other character
  * @str: inputt string
  *
  * Return: None
  */

void puts2(char *str)
{
	int i; /* counter */

	i = 0;
	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
