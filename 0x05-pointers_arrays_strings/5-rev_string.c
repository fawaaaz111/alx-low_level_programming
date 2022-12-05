#include "main.h"

/**
  * rev_string - reverse a string
  * @s: the input string
  *
  * Return: Void
  */

void rev_string(char *s)
{
	int len = 0;
	char *reverse;

	while (s[len] != '\0');
	{
		len++;
	}

	for(len-- ; len >= 0 ; len--)
	{
		reverse = _putchar(s[len]);
	}
}
