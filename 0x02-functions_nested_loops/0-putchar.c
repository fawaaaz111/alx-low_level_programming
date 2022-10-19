#include <main.h>

/**
 * main - prints the string "_putchar" from a character array.
 *  Return: 0 on success
 */

int main(void)
{

	char p[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar("\n");
	return (0);
}
