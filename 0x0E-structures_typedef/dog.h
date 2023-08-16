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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
