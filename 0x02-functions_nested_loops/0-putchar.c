#include "main.h"

/**
 * main - prints the string "_putchar" from a character array.
 *  Return: 0 on success
 */

int main(void)
{
	char *ch = "_putchar";
	while(*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar("\n");
	return (0);
}
