#include "lists.h"

/**
 *delete_dnodeint_at_index - function
 *@head: a pointer
 *@index: a index
 *Return: 1 on succeed, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
	dlistint_t *temp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint(h, n));
}
