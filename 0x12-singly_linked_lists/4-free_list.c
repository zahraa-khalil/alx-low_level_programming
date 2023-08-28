#include "lists.h"
#include <string.h>

/**
 *free_list- function that adds a new node at the end of a list_t list.
 *@head: A pointer to the head of the linked list.
 *Return: nothing
 */

void free_list(list_t *head)
{
	 while (head != NULL) {
        list_t *temp = head;
        head = head->next;
        free(temp->str);  // Free the string memory
        free(temp);       // Free the node memory
    }
}
