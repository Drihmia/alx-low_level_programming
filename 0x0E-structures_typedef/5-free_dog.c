#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: pointer to struct dog.
 * Return: Void.
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	if (d)
		free(d);
}

