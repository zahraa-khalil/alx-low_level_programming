#include "lists.h"

/**
 **get_nodeint_at_index- function that returns the nth node of a linked list.
 *@head: A pointer to the head of the linked list.
 *@index: index of the node
 *Return: nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		current = current->next;
		count++;
	}

	return (NULL);
}
