#include "main.h"
#include <stdio.h>

/**
 *_puts -  f function that prints n elements of an array of integers
 *@a: char to be checked
 *@n: char to be checked
 *Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}

	printf("\n");
}
