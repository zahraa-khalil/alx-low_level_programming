#include "main.h"
#include <stddef.h>

/**
 **_strchr - function that locates a character in a string.
 *@s: string to be strchr
 *@c: character to be strchr
 *Return: pointer or NULL.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		i++;
	}

	return (NULL);
}
