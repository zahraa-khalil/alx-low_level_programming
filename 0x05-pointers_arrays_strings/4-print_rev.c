#include "main.h"

/**
 *print_rev - function that prints a string, in reverse,
 *followed by a new line.
 *@s: char to be checked
 *Return: nothing
 */

void print_rev(char *s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }

    while (length >= 0)
    {
        _putchar(s[length]);
        length--;
    }

    _putchar('\n');
}
