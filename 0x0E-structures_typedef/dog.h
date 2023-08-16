#ifndef DOG_H
#define DOG_H

/**
 *struct dog - dog structure
 *@name: structure member for dog name
 *@age: structure member for dog age
 *@owner: - structure member for dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
