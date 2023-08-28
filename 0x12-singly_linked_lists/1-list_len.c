#include "lists.h"

/**
 *list_len - function that returns the number of elements in a linked.
 *@h: A pointer to the head of the linked list.
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
