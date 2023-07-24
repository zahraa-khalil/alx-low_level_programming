#include "main.h"

/**
 *rev_string - function that reverses a string.
 *@s: char to be checked
 *Return: nothing
 */

void rev_string(char *s)
{
	int length = 0;
	int len;
	char str;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	len = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		str = s[i];
		s[i] = s[len];
		s[len--] = str;
	}
}
