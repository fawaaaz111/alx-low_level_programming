#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nl = 0; /*number of nodes counted*/

	while (h)
	{
		printf("%d\n", h->n);

		/*go to next node*/
		h = h->next;
		nl++;
	}
	return (nl);
}
