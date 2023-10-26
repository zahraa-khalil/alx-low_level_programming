#include "main.h"

/**
 *binary_to_uint- function that converts a binary number to an unsigned int
 *@b: is pointing to a string of 0 and 1 chars
 *Return: converted number, or 0
 *there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int decimal;
	unsigned int i;

	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			decimal = (decimal << 1) | 1;
		}	 
		else if (b[i] == '0')
		{
			decimal <<= 1;
		}

		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimal);
}
