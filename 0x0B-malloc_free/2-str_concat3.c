#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 **str_concat - function that concatenates two strings.
 *space in memory, which contains a copy of the string given as a parameter.
 *it with a specific char.
 *@str: string to allocate
 *Return: a pointer or null on failure
 */

char *str_concat(char *s1, char *s2)
{
    char result;
    char *p = NULL;
    unsigned int s1length;
    unsigned int s2Length;
    int strSize;

    // concatenate 2 strings
    // result = s1+s2 + \0

    while (s1[s1length] != '\0' && s1 != NULL)
    {
        s1length++;
    }

    while (s2[s2Length] != '\0')
    {
        s1[s1length + s2Length] = s2[s2Length];
        s2Length++;
    }
    s1[s1length + s2Length] = '\0';

    strSize = s1length + s2Length;

    // conatenate 2 string
    // get the length of the new string

    // malloc with string length
    p = (char *)malloc( strSize * sizeof(char));
 
    return p;

    // return null on failure
}
