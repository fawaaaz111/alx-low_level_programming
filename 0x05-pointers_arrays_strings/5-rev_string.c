#include "main.h"

/**
<<<<<<< HEAD
  * rev_string - reverse a string
  * @s: the input string
  *
  * Return: Void
=======
  * rev_string - get the reverse of a string
  * @s: th input string
  *
  * Return: None
>>>>>>> 067bd955de35f91e5965a6ec2d9bdca4091a6ffb
  */

void rev_string(char *s)
{
<<<<<<< HEAD
	int len = 0;
	char *reverse;

	while (s[len] != '\0');
=======
	int len = 0, i;
	char temp;

	while (s[len] != '\0')
>>>>>>> 067bd955de35f91e5965a6ec2d9bdca4091a6ffb
	{
		len++;
	}

<<<<<<< HEAD
	for(len-- ; len >= 0 ; len--)
	{
		reverse = _putchar(s[len]);
=======
	for (i = 0 ; i < len / 2 ; i++)
	{
		/* temp var uses to temporary holds the string */
		temp = *(s + i);
		*(s + i) = *(s + (len - 1 - i));
		*(s + (len - 1 - i)) = temp;
>>>>>>> 067bd955de35f91e5965a6ec2d9bdca4091a6ffb
	}
}
