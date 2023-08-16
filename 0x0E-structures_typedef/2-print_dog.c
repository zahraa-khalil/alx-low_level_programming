#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - function that initialize a variable of type struct dog
 *@d: variable
 */
void print_dog(struct dog *d)
{
    char nil[] = "(nil)";

    if (d != NULL)
    {
        printf("Name: %s\n", d->name?d->name : nil );
        printf("Age: %f\n", d->age);
        printf("Owner: %s\n", d->owner? d->owner : nil);
    }
  
}
