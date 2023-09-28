#include "main.h"

/**
 *binary_to_uint-  function that converts a binary number to an unsigned int
 *@b: is pointing to a string of 0 and 1 chars
 *Return: converted number, or 0
 *there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = 0;
	char bit;
	int i;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		bit = b[i];

		if (bit == '1')
		{
			result += 1 << (length - i - 1);
		}
		else if (bit != '0')
		{
			return (0);
		}
	}

	return (result);
}
