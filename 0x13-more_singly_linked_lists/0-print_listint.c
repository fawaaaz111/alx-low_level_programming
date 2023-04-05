#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t nl = 0; /*number of nodes counted*/

	while(h)
	{
		printf("%d\n",h->n);

		/*go to next node*/
		h= h->next;
		nl++;
	}
	return (nl);
}
