#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 **_strdup - function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given as a parameter.
 *it with a specific char.
 *@str: string to allocate
 *Return: a pointer or null on failure
 */

char *_strdup(char *str)
{
	int size = 0;
	char *p = NULL;
	char *dup = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		p = str;
		while (*p++)
		{
			size++;
		}

		dup = malloc((size + 1));

		if (dup != NULL)
		{
			p = dup;
			while (*str)
			{
				*p++ = *str++;
			}

			*p = 0;
			return (dup);
		}
		else
		{
			return (NULL);
		}
	}
}
