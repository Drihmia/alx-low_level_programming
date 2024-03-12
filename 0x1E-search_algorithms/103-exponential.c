#include "search_algos.h"

/**
 * exponential_search - a function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Notes:
 * - I will use powers of 2 as exponential ranges to search in your array.
 * - once the value is found, I'll use the binary search.
 * - Every time I compare a value in the array to the value I'm searching for,
 * I will print this value.
 * - Every time I split the array, I'll print the new array I'm searching in.
 *
 * Return:
 * - The function will return the first index where value is located.
 * - If value is not present in array or if array is NULL, the function
 * will return -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, base = 2, limit, sub_arr_range = 0;
	int ret;

	if (!array || size == 0)
		return (-1);

	if (size == 1)
		return (0);


	for (i = 1; i < size; i = i * base)
	{
		if (i * base >= size)
			limit = size - 1;
		else
			limit = i * base;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if ((value >= array[i] && value <= array[limit]) ||
				(limit == size - 1 && limit != i * base))
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					i, limit);
			sub_arr_range = limit - i + 1;
			ret = binary_search(&array[i], sub_arr_range, value);

			if (ret == -1)
				break;
			return (ret + i);
		}

	}
	return (-1);
}
