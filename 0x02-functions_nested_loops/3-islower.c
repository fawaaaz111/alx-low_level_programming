#include "main.h"

/**
  * _islower - check if a character is lower case or not
  * @c: the input to be check
  *
*Return: 1, if it is, 0 if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
