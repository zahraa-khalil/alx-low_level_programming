#include "lists.h"
#include <string.h>

/**
 **add_node_end- function that adds a new node at the end of a list_t list.
 *@head: A pointer to the head of the linked list.
 *@str: The name of the node
 *Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;

	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);

		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->len = strlen(str);
		new_node->next = NULL;

		if (*head == NULL)
		{ *head = new_node;
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
