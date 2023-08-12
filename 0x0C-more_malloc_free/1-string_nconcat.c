#include "main.h"
#include <stdlib.h>

/**
 **string_nconcat - function that concatenates two strings
 *@s1: string to concatenate
 *@s2: string to concatenate
 *@n: number of bytes of s2
 *Return: a pointer to the allocated memory or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (n > j)
	{
		n = j;
	}

	ptr = (char *) malloc(sizeof(char) * (i + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	for (k = 0; k < n; k++)
	{
		ptr[i + k] = s2[k];
	}

	ptr[i + n] = '\0';

	return (ptr);
}
