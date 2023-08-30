#include "lists.h"
#include <string.h>

/**
 **add_nodeint_end- function that adds a new node at the end of a list_t list.
 *@head: A pointer to the head of the linked list.
 *@n: integer
 *Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;

	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{*head = new_node;
			return (new_node);
		}

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;

		return (new_node);
	}
}
