#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: pointer to struct dog.
 * Return: Void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}

