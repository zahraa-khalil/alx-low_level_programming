#include "lists.h"
#include <string.h>

/**
 **add_nodeint - function that adds a new node at the beginning of a list.
 *@head: A pointer to the head of the linked list.
 *@n: The name of the node
 *Return: address of the new element, or NULL if it failed
 */

listint_t* add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t*) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;

		new_node->next = *head;
		*head = new_node;

		return (*head);
	}
}
