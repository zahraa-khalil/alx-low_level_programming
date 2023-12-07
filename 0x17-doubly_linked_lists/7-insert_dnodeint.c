#include "lists.h"

/**
 *insert_dnodeint_at_index - function
 *@h: a pointer
 *@idx: a pointer
 *@n: a pointer
 *Return: the address of the new node,
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
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
