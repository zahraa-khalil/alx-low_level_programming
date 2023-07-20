#include "main.h"

/**
*print_line - prints a straight line in the terminal.
*@n -  is the integer for the paramaters of my function
*Return: Always void
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
		_putchar('\n');
}
