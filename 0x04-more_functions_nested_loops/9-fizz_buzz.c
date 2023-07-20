#include "main.h"
#include <stdio.h>

/**
 *main - a program that prints the numbers from 1 to 100,
 * followed by a new line
 *Return: Always void
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}

	return (0);
}
