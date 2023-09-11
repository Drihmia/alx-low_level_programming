#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - initialize a variable of type struct dog.
 * @name: dog's name
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: pointer to the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (owner[i] != '\0')
	{
		dog[i].owner = &owner[i];
		i++;
	}
	dog->owner = malloc(sizeof(char) * i + 1);
	strcpy(dog->owner, owner);
	while (name[i] != '\0')
	{
		dog[i].name = &name[i];
		i++;
	}
	dog->name = malloc(sizeof(char) * i + 1);
	dog->age = age;
	strcpy(dog->name, name);
	return (dog);
}
