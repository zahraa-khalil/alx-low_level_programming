#include "function_pointers.h"

/**
 *array_iterator - function that prints a name.
 *@action: Pointer to function
 *@array: array of pointers
 *@size: size of array
 *Returns: nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
