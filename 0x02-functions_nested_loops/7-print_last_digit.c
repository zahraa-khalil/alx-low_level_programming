#include "main.h"

/**
 *print_last_digit:  prints the last digit of a number.
 *@i: number to be checked
 *Return: Always value of the last digit
 */

int print_last_digit(int i)
{
        int n;

        n= i%10;

	if (n < 0)
	{
		n *= -1;
	}

	_putchar(n + '0');
	return (n);
}
