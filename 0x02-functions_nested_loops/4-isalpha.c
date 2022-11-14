#include "main.h"

/**
  * _isalpha - print alphabetic chars lwoer or upper cases
  * @c: the input character
  *
  * Return: 1 if it is, 0 otherwise
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
