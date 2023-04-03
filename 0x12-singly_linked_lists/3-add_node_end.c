#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t * cur = malloc(sizeof(list_t));

	cur->str = strdup(str);
	cur->len = strlen(str);
	cur->next = NULL;

	/* traverse the media to reach end of list*/
	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}

	/* assign last node to pointer to new node*/
	(*head)->next = cur;

	return (cur);
}
