#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: number of parameters
 *@...: arguments
 *Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int i = 0;
	int sum = 0;
	int arguments = 0;

	while (i < n)
	{
		int arguments = 0;
		arguments = va_arg(args, int);
		sum += arguments;
		i++;
	}

	va_end(args);
	return sum;

}
