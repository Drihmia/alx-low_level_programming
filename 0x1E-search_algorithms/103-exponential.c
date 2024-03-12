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
#include "search_algos.h"

/**
  * binary_search - a function that searches for a value in a sorted array of
  * integers using the Binary search algorithm.
  * @array: is a pointer to the first element of the array to search in.
  * @size: is the number of elements in array.
  * @value: is the value to search for.
  * Notes:
  * - I will print the array being searched every time it changes.
  * (e.g. at the beginning and when you search a subarray)
  * - Assuming that the array will be sorted in ascending order
  * - Assuming that the value won’t appear more than once in array
  * Return:
  * - The function will return the index where value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	if (size == 1)
		return (0);
	return (b_search(array, 0, size - 1, value));
}
/**
  * b_search - a recursive helper function that searches for a value in a
  * sorted array of integers using the Binary search algorithm.
  * @ar: is a pointer to the first element of the array to search in.
  * @val: is the value to search for.
  * @lower: lower index of the searching range.
  * @higher: higher index of the searching range.
  * Return:
  * - The function will return the index where value is located.
  */

int b_search(int *ar, size_t lower, size_t higher, int val)
{
	size_t middle;

	print_ar(ar, lower, higher);
	middle = lower + (higher - lower) / 2;

	if (higher <= lower)
	{
		if (val == ar[lower])
			return (lower);
		return (-1);
	}

	if (val > ar[middle])
	{
		return (b_search(ar, middle + 1, higher, val));
	}
	else if (val < ar[middle])
	{
		return (b_search(ar, lower, middle - 1, val));
	}
	else if (val == ar[middle])
	{
		return (middle);
	}
	else
	{
		return (-1);
	}
}

/**
  * print_ar - printing array from index to index.
  * @ar: array to print from
  * @start: starting index.
  * @end: the ending index.
  * Return: None
  */
void print_ar(int *ar, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: %d", ar[start]);
	for (i = start + 1; i <= end; i++)
	{
		printf(", %d", ar[i]);
	}
	printf("\n");
}
