#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current = malloc(sizeof(list_t));

	if (!current)
		return (NULL);

	current->str = strdup(str);
	current->len = strlen(str);
	current->next = *head;
	*head = current;

	return (current);
}
