#include "main.h"

/**
 *is_prime_number- function that returns 1 if the input integer is a prime number,
 *  otherwise return 0.
 *@n: integer number
 *Return: eturns 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
    if(n == 2)
    {
        return (1);
    }
	else if (n > 2 && n % 2 != 0)
	{
        if ( n % is_prime_number(n-1) != 0 )
        {
            return (1);
        }
		else
        {
            return (0);
        }
	}
	else
	{
        return (0);
	}
}
