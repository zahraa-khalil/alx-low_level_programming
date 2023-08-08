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

		if (arr != NULL)
		{
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
