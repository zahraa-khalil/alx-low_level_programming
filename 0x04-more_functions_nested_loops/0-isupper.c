// #include "main.h"

// /**
//  * _isupper - check for uppercase character.
//  * @c: int to be checked
//  * Return: 0
//  */
// int _isupper(int c)
// {
//     if ((c >= 'A' && c <= 'Z') || (c >= 65 && c <= 90))
//         return (1);
//     else
//         return (0);
// }
 #include "main.h"
 
/**
 * _isupper - function that checks for uppercase character.
 * @c: the int for the paramaters of my function
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	return (0);
}
