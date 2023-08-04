#include "main.h"

/**
 *_strcpy - function that copies the string pointed to by _str
 *  to the buffer pointed to by dest
 *@dest: copy source to this buffer
 *@src: this is the source to copy
 *Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length;

	length = 0;
	while ((src[length]) != '\0')
	{
		length++;
	}

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}
