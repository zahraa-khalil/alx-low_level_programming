#include "function_pointers.h"

/**
 *print_name- function that prints a name.
 *@f: Pointer to function
 *@name: Name
 *Returns: nothing
 */
void print_name(char *name, void(*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
