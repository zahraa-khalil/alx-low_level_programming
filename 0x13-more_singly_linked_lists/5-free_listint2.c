#include "lists.h"

/**
 *free_listint2- function that frees a list_t list.
 *@head: A pointer to the head of the linked list.
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
    if (head == NULL)
	{
		return;
	}
    
	while (*head != NULL)
	{
		listint_t *temp = *head;

		*head = (*head)->next;

		free(temp);
	}
}

