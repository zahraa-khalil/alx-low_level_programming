#include "main.h"

/**
 *main - check for uppercase character.
 *@n: number to be checked
 *Return: Always 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
    return (0);
}
