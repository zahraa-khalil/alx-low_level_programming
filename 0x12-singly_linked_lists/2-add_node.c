#include "lists.h"
#include <string.h>

/**
 **add_node - function that adds a new node at the beginning of a list_t list.
 *@head: A pointer to the head of the linked list.
 *@str: The name of the node
 *Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
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
		new_node->next = *head;

		*head = new_node;

		return (*head);
	}
}
