#include "lists.h"

/**
 *get_dnodeint_at_index -  function that adds a new node at
 *the beginning of a dlistint_t list.
 *@head: a pointer
 *@index: index of the node,
 *Return: the number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
