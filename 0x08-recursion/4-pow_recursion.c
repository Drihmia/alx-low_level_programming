#include "main.h"

/**
 * _pow_recursion - calculate x raised to the power of y.
 * @x: the base , integer
 * @y: the exponent, integer
 * Return:  the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
