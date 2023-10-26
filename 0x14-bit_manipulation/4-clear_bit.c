#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: input number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
