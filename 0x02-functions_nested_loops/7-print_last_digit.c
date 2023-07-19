#include "main.h"

/**
*print_last_digit - function that print last digit of a number
*@i: number to be targeted
n to be declared
*Return: returns 0
*/

int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (n < 0)
	{
		n *= -1;
	}

	_putchar(n + '0');
	return (n);
}
