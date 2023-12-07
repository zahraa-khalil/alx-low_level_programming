#include "lists.h"

/**
 *add_dnodeint -  function that adds a new node at
 *the beginning of a dlistint_t list.
 *@head: a pointer
 *@n: the number of elements
 *Return: the number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;

	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
