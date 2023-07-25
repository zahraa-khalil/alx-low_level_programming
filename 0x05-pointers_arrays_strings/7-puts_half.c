#include "main.h"

/**
 *puts_half -  function that prints half of a string, followed by a new line
 *@str: char to be checked
 *Return: nothing
 */

void puts_half(char *str)
{
	int length = 0;
	int i = 0;
	char n;

	while (str[length] != '\0')
	{
		length++;
	}

	if ((length % 2) != 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (length - 1) / 2;
		for (i = n; i < length; i++)
		{
			_putchar(str[i] + 1);
		}
	}

	_putchar('\n');
}
