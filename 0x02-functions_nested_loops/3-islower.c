#include "main.h"

/**
  * _islower - check if a character is lower case or not
  * @c: the input to be check
  *
*Return: 1, if it is, 0 if not
*/

int _islower(int c)
{
	int input = c, cont, res;

	for (cont = 'a'; cont <= 'z'; cont++)
	{
		if (input == cont)
			res = 0;
		else
			res = 1;
	}
	return (res);
}
