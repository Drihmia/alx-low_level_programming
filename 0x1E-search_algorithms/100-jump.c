#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Notes:
 * - I will use the sqrt() function included in <math.h> (-lm)
 * - I will use the square root of the size of the array as the jump step.
 * - Assuming that the array will be sorted in ascending order
 * Return:
 * - The function will return the first index where value is located.
 * - If value is not present in array or if array is NULL, the function
 * will return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, j, limit;
	int bounded = 0;

	if (!array || size == 0)
		return (-1);

	if (size == 1)
		return (0);

	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (i + jump > size)
			limit = size - 1;
		else
			limit = i + jump;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if ((value >= array[i] && value <= array[limit]) ||
				(limit == size - 1 && limit != i + jump))
		{
			bounded = 1;
			printf("Value found between indexes [%lu] and [%lu]\n",
					i, i + jump);
			for (j = i; j <= limit; j++)
			{
				printf("Value checked array[%lu] = [%d]\n",
						j, array[j]);
				if (value == array[j])
					return (j);
			}
		}
		if (bounded)
			break;
	}
	return (-1);
}
