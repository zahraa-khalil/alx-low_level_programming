#include "main.h"
#include <stdlib.h>

/**
 * *array_range- function that creates an array of integers.
 *@min: minimum value
 *@max: maximum value
 *Return: the pointer to the newly created array
 *NULL If min > max || malloc fails
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int count = min;
	int *arr = NULL;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		arr = (int *) malloc(((max - min) + 1) * sizeof(int));

		if (arr == NULL)
		{
			return (NULL);
		}

		while (count <= max)
		{
			arr[count - min] = count;
			count++;
		}

		ptr = arr;

		return (ptr);
	}
}
