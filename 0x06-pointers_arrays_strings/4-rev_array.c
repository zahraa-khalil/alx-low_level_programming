#include "main.h"

/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: Pointer to first string to compare
 *@n:number of elements in array
 *Return: integer comparison
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int reversed_array;

	while (i < n)
	{
		reversed_array = a[i];
		a[i] = a[n - 1];
		a[n - 1] = reversed_array;

		i++;
		n--;
	}
}
