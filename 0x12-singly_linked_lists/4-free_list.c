#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	/*base case: stop when reaching end of list*/
	if (head == NULL)
		return;
	else
		/*recursive mode: recall with (next) as new head*/
		free_list(head->next);
		free(head);
}
