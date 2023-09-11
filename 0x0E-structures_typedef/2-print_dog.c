#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: variable of type dog
 * Return: None
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
