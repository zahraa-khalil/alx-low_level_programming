#include "function_pointers.h"

/**
 *int_index - function that searches for an integer.
 *@cmp: Pointer to function
 *@array: array of pointers
 *@size: size of array
 *Return: index of the first element for which the cmp
 *function does not return 0 || -1 oon failure
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0;

	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}

				i++;
			}

			return (-1);
		}
	}

	return (-1);
}
