#include "main.h"

/**
 *_isalpha - checks c for lowercase & uppercase character.
 *@c: the character to be checked
 *Return: Always number
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
