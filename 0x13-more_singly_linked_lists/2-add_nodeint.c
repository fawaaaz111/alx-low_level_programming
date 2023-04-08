#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	// create new node
	listint_t *ptr = malloc(sizeof(listint_t));

	// make sure allocatin done succesfuly
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
