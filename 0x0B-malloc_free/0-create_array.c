#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array, unsignet integer.
 * @c: character.
 * Return: pointer to char.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	if (size == 0 || c == '\0')
		return (NULL);

	ar = malloc((size + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		*(ar + i) = c;
		i++;
	}
	return (ar);
}

