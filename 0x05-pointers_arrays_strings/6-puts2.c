#include "main.h"

/**
 *puts2 -  function that prints every other character of a string
 *@s: char to be checked
 *Return: nothing
 */

void puts2(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
