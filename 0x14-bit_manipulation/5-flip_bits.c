#include "main.h"


/**
 * flip_bits - checks the number of bits you would need
 * to flip to get from one number to another.
 * @n: the first number as input.
 * @m: the second number as input.
 * Return: number of bits needed for the flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n, b = m, num = 0;

	while (n || m)
	{
		a = (n) & 1;
		b = (m) & 1;
		if  (a != b)
			num++;
		n = (n >> 1);
		m = (m >> 1);
	}
	return (num);
}
