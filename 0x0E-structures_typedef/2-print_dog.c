#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - function that prints a struct dog
 *@d: Pointer to struct
 * Returns: nothing
 */
void print_dog(struct dog *d)
{
	char nil[] = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? (*d).name : nil);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? (*d).owner : nil);
	}
}
