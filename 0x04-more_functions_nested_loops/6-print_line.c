#include "main.h"

/**
 *print_line - draws a straight line in the terminal.
 *@n -  number of times the character _ printed
 *Return: Always nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0; i <= n; i++)
		{
            _putchar(n + '0');
			_putchar('_');
		}

	_putchar('\n');
}
