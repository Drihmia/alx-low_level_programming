#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - executes a function given as a parameter
 * on each element of an array.
 * @array: number of elements in the array.
 * @size: size of the array.
 * @cmp: a pointer to the function to be used to compare values.
 * Return: the index of the first element for which
 * the cmp function does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || cmp == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
