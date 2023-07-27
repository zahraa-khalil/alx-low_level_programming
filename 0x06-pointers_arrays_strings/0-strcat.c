#include "main.h"

/**
 **_strcat -function that concatenates two strings.
 *@dest: Pointer to the destination buffer where the result will be stored.
 *@src: Pointer to the source string that will be appended to dest.
 *Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
