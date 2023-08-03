#include "main.h"

/**
 *factorial - function that returns factorial of a given number.
 *@n: integer number
 *Return: number of factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
