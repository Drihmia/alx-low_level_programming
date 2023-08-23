#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to integer.
 * @n: number of elements of the array.
 * Return: None.
 */

void reverse_array(int *a, int n)
{
	int end = n -1, start = 0, tmp;
	while (end != start)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		end--;
		start++;
	}
}
