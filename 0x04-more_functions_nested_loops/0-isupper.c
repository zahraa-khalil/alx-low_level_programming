#include "main.h"

/**
 * _isupper - check for uppercase character.
 * @c: int to be checked
 * Return: 0
 */
int _isupper(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    else
        return (0);
}
