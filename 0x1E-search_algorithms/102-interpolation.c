#include "search_algos.h"

/**
  * interpolation_search -  a function that searches for a value in a sorted
  * array of integers using the Interpolation search algorithm
  * @array: is a pointer to the first element of the array to search in.
  * @size: is the number of elements in array.
  * @value: is the value to search for.
  *
  * Notes:
  * - in order to determine the probe position, I wil use :
  * size_t pos = low + (((double)(high - low) /
  * (array[high] - array[low])) * (value - array[low]))
  *
  * Return:
  * - The function will return the first index where value is located.
  * - If value is not present in array or if array is NULL, the function
  * will return -1.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high, i;
	int condition;

	if (!array || size == 0)
		return (-1);

	if (size == 1)
		return (0);

	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	printf("pos = %lu\n", pos);
	if (pos >= size)
		printf("Value checked array[%lu] is out of range\n", pos);
	else
	{
		i = pos;
		if (value > array[pos])
			condition = i < size;
		else
			condition = i >= 0;
		for (; condition;)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
			if (value > array[pos])
				i++, condition = i < size;
			else
				i--, condition = i >= 0;
		}

	}
	return (-1);
}

