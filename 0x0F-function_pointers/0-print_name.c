#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_name- function that prints a name.
 *@f: Pointer to function
 *@name: Name
 * Returns: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	 f(name);
}
