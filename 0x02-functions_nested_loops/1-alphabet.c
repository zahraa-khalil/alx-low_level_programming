#include "main.h"

/**
 *main - print the alphabet in lowercase, followed by a new line.
 *Return: Always alphabet in lowercase, followed by a new line
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
