#include "main.h"

/**
 *print_alphabet_x10 - print the alphabet in lowercase 10 times,
 *followed by a new line.
 *Return: Always void
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
