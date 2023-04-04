#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *next, *crnt = head;

	while (crnt != NULL)
	{
		next = crnt->next;
		free(crnt->str);
		free(crnt);
		crnt = next;	
	}
	head = NULL;
}
