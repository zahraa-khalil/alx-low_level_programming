#include "main.h"
#include <stdlib.h>

/**
 **malloc_checked - function that allocates memory using malloc.
 *@b: size of memory
 *Return: a pointer to the allocated memory or normal process
 *termination with a status value of 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	free(ptr);
	return (ptr);

}
