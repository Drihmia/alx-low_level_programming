#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to set.
 * @n: number as input.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (1 << (unsigned long int)index);
	return (1);
}
