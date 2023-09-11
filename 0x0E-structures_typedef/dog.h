#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a dog.
 * @name: dog's name
 * @age: dog's age.
 * @owner: dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
#endif
