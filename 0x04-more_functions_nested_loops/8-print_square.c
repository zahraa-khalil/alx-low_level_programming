#include "main.h"

/**
 *print_square - prints aquare
 *@size: int parameter
 *Return: Always void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
