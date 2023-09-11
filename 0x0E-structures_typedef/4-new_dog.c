#include "dog.h"
#include <stdlib.h>
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
	int i = 0, j = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (owner[i] != '\0')
	{
		i++;
	}
	dog->owner = malloc(sizeof(char) * i + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	while (name[j] != '\0')
	{
		j++;
	}
	dog->name = malloc(sizeof(char) * j + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	dog->age = age;
	return (dog);
}
