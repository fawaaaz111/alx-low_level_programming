#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *cur = malloc(sizeof(list_t));

	if (!cur)
		return (NULL);
	cur->str = strdup(str);
	cur->len = strlen(str);
	cur->next = NULL;

	temp = *head;
	/*if the list empty, add directly new node*/
	if (*head == NULL)
		*head = cur;
	else
	{
		/* traverse the media to reach end of list*/
		while (temp->next != NULL)
			temp = temp->next;
	
		/* assign last node next pointer to new node*/
		temp->next = cur;
	}
	return (*head);
}
