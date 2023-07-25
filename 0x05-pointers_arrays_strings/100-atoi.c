#include "main.h"
#include <stdio.h>

/**
 *_atoi -  function that convert a string to an integer.
 *@s: char to be checked
 *Return: integer value
 */

int _atoi(char *s)
{

    int i = 0;
    int result = 0;


    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');

            i++;
     
        }
        else
        {
            return (0);
        }
    }
    
    return (result);
}
