#include "main.h"
#include <stdlib.h>

/**
 **string_nconcat - function that allocates memory for an array, using malloc
 *@nmemb: element number of array
 *@size: size of element array
 *Return: pointer to the allocated memory ||
 *NULL If nmemb or size is 0, then _calloc || malloc fails,
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(nmemb * size);

	return (ptr);

}
