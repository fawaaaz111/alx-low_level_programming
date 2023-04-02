#include "lists.h"
/**
  * print_list - prints all the elements of list_t list
  *@h: singly linked list
  *
  *Return: number of elemnts in the list
  */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		cnt++;
		h = h->next;
	}
	return (cnt);
}
