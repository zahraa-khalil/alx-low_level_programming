#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 **create_array - function that creates an array of chars, and initializes
 *it with a specific char.
 *@c: character to be initialized with.
 *@size: size of the array
 *Return: a pointer or null on failure
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size > 0)
	{
		arr = (char*) malloc(size* sizeof(char));
		// pointer now points to the memory location
		// where space for size chars has been allocated on the heap.
		if (arr != NULL)
		{
			// assign c to first char in the array
			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
		}
		else
		{
			return (NULL);
		}

		return arr;
	}
	else
	{
		return (NULL);
	}
}
