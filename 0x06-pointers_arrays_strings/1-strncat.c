#include "main.h"

/**
 **_strcat -function that concatenates two strings.
 *@dest: Pointer to the destination buffer where the result will be stored.
 *@src: Pointer to the source string that will be appended to dest.
 *@n: int n bytes from src.
 *Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}

	while (src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}

	if (src[n] >= n) {}
	else
	{
		dest[i + n] = '\0';
	}

	return (dest);
}
