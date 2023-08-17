#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@n: number of parameters
 *@separator: separator
 *@...: arguments
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int arguments = 0;

	va_list args;

	va_start(args, n);

	while (i < n)
	{
		arguments = va_arg(args, int);

		printf("%d", arguments);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(args);
}
