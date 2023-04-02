#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	list_t *ptr = h;
	while (ptr != NULL)
	{
		if (ptr -> str == NULL)
			printf("[0] (nill)");
		else
			printf("[%d] %s\n", ptr -> len, ptr -> str);

		cnt++;
		ptr = ptr -> next;
	}
	return (cnt);
}
