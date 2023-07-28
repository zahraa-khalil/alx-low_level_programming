#include "main.h"

/**
 *_strcmp -function that copies a string.
 *@s1: Pointer to first string to compare
 *@s2: Pointer to second string to compare
 *Return: integer comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
