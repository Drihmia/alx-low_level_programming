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
