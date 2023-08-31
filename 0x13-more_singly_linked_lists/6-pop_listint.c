#include "lists.h"

/**
 *pop_listint- function that frees a list_t list.
 *@head: A pointer to the head of the linked list.
 *Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	value = temp->n;

	*head = (*head)->next;

	free(temp);

	return (value);
}
