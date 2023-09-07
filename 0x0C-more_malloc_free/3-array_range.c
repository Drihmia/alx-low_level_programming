#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min value.
 * @max: max value.
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ar = NULL, diff, i;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	ar = malloc(sizeof(int) * diff);

	if (ar == NULL)
		return (NULL);

	for (i = min; i <= min + diff; i++)
		ar[i] = i;
	return (ar);
}
