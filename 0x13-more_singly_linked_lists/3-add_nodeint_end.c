#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create new node*/
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *cur = *head;

	if (!ptr)
		return (NULL);

	/* travers list till the end*/
	if (cur->next)
		cur = cur->next;
	ptr->n = n;
	ptr->next = NULL;
	cur->next = ptr;

	return (*head);
}
