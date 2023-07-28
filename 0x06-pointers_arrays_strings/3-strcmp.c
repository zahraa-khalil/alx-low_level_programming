#include "main.h"

/**
 **_strncpy -function that copies a string.
 *@dest: Pointer to the destination buffer where the result will be stored.
 *@src: Pointer to the source string that will be appended to dest.
 *@n: int n bytes from src.
 *Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}

	return (dest);
}
