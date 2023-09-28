#include "main.h"

/**
 * get_bit - get the the bit at index index.
 * @index: starting from 0 of the bit you want to get.
 * @n: number as input.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ret;

	if ((n >> (index - 0) ==  0))
		return (-1);
	ret = ((n >> (index - 0)) & 1);
	return (ret);
}
