#include "lists.h"

/**
 *free_list- function that frees a list_t list.
 *@head: A pointer to the head of the linked list.
 *Return: nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}
