#include "lists.h"

/**
 *delete_nodeint_at_index- function that frees a list_t list.
 *@head: A pointer to the head of the linked list.
 *Return: the head node’s data (n).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t * temp;
	unsigned int i;
	listint_t * node_to_delete;

	if (*head == NULL)
	{
		return (-1);
	}

	if (*head == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return -1;
		}

		temp = temp->next;
	}

	temp->next = node_to_delete->next;
	free(node_to_delete);
	return 1;
}
