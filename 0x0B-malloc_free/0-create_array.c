#include "main.h"

/**
  * create_array -creates array of chars, and initialize it with specific char
  * @size: size of the arrray
  * @c: the character to be signed to the array
  *
  * Return: pointer to array
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
