#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Notes:
 * - Every time I compare a value in the array to the value I'm
 * searching, I will print this value.
 * Return:
 * - The function will return the first index where value is located.
 * - If value is not present in array or if array is NULL, the function
 * will return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
