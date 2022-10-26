#include "main.h"
#include <stdio.h>

/**
* swap_int - swap tow values
* @a: first value
* @b: second value
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
