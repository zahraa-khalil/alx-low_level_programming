#include "main.h"

/**
 **_memcpy - function copies n bytes from memory area src to memory area dest
 *@src: source memory area
 *@dest: memory area destination
 *@n: bytes of the memory area to be copied.
 *Return: a pointer to the  memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
