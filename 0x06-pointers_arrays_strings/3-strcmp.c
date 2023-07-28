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

	while (src[i] != '\0' && src[i] <= n)
	{
		dest[i] = src[i];
        i++;
	}
    
    //  while (i < n)
    // {
    //     dest[i] = '\0';
    //     i++;
    // }

	return (dest);
}
