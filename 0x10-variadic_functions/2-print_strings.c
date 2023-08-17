#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - function that prints numbers, followed by a new line.
 *@n: number of parameters
 *@separator: separator
 *@...: arguments
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *argument;
	char *nil = "(nil)";

	va_list args;

	va_start(args, n);

	while (i < n)
	{
		argument = va_arg(args, char *);

		printf("%s", argument ? argument : nil);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(args);
}
