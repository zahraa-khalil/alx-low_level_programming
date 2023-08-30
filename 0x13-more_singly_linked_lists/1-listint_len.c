#include "lists.h"

/**
 *listint_len - function that prints all the elements of a list_t list.
 *@h: A pointer to the head of the linked list.
 *Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
