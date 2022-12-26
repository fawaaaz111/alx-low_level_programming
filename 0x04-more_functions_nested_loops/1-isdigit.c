#include "main.h"

/**
  * _isdigit - checks for digit (0 - 9)
  * @c: the item to be checked
  *
  * Return: 1 if digit, 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
