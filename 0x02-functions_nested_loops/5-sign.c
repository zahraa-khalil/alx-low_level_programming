#include "main.h"

/**
 *print_sign - prints the sign of a number.
 *@c: number to be checked
 *Return: Always string with number and sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(',');
		_putchar('+');

	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
		_putchar(',');
	}
	else
	{
		return (0);
		_putchar('0');
		_putchar(',');
	}
}
