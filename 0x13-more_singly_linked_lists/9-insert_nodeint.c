#include "lists.h"

/**
 **insert_nodeint_at_index - returns the sum of all the data (n)
 *@head: A pointer to the head of the linked list.
 *@idx: The index og the list
 *@n: The number
 *Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *cursor;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	cursor = *head;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}

	while (cursor != NULL)
	{
		if (count == idx - 1)
		{
			temp->next = cursor->next;
			cursor->next = temp;
		}

		count++;
		cursor = cursor->next;
	}

	if (idx > count)
		return (NULL);
	return (temp);
}
