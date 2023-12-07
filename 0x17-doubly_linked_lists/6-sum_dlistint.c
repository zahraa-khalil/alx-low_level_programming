#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the sum of all the data
 *(n) of a dlistint_t linked list.
 *@head: a pointer
 *Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
