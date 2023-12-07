#include "lists.h"

/**
 *free_dlistint -  function that adds a new node at
 *@head: a pointer
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
