#include "main.h"

/**
  * _isupper - checks if a character is uppercase or not
  * @c: the character to be checked
  *
  * Return: 1 if it upper, 0 else
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
