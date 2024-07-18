#include "search_algos.h"

/**
 * linear_search - a function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: a list of integers
 * @size: the size of the array
 * @value: the value to search
 * Return: -1 If value is not present or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
