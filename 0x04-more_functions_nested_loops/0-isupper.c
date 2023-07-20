#include "main.h"

/**
 * _isupper - check for uppercase character.
 * @c: int to be checked
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 65 && c <= 90))
    {
        return (1);
    }
    else
        return (0);
}
