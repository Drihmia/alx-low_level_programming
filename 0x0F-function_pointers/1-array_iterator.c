#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array of integers
 * @size: size of the array
 * @action: funtion pointer that accept an one integer parameter.
 * Return: None.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || action == NULL || size == 0)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
		action(array[i]);
}
