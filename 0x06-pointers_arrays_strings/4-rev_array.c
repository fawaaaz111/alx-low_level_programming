#include "main.h"

/**
* reverse_array - reverse an array of an integers
*@a: the array to be reversed
*@n: limit of number to be reversed from the array
*
* Return: NONE
*/

void reverse_array(int *a, int n)
{
	int i;

	i = n;
	while (i >= 0)
	{
		if (i != n)
			printf(", ");
		printf("%d", a[i]);
		i--; 
	}
	printf("\n");
}
