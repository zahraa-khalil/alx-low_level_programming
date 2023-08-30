#include "lists.h"

/**
 *print_listint - function that prints all the elements of a list_t list.
 *@h: A pointer to the head of the linked list.
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
