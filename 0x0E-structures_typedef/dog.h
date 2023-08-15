#ifndef DOG_H
#define DOG_H

/**
 *struct dog - dog structure
 *@name structure member for dog name
 *@age structure member for dog age
 @owner structure member for dog owner
 */

struct dog {
    char *name;
    float age;
    char *owner;
};

typedef struct Dog{
    char *name[50];
    float age;
    char *owner[50];
}  my_dog;

#endif
