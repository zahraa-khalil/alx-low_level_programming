#include "main.h"

/**
 *print_alphabet - print the alphabet in lowercase, followed by a new line.
 *Return: Always void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
