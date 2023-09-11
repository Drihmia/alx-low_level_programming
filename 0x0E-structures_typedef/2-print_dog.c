#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: variable of type dog
 * Return: None
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_FAILURE);
	if (d->name == (void *)0)
		d->name = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
