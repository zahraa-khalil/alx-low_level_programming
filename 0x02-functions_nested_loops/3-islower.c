#include "main.h"

/**
 *_islower - checks c for lowercase character.
 *@c: the character to be checked  
 *Return: Always number
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
