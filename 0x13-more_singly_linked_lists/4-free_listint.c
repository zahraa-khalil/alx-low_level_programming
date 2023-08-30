#include "lists.h"

/**
 *free_listint- function that frees a list_t list.
 *@head: A pointer to the head of the linked list.
 *Return: nothing
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;

		free(temp);
	}
}
