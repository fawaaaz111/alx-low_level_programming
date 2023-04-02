#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *current = malloc(sizeof(list_t));
	if (!current)
		return (NULL);

	current->str = strdup(str);
	current->len = strlen(str);
	current->next = *head;
	*head = current;
}
