#include "main.h"
int search_sqrt_rec(int n, int guess);

/**
 * _sqrt_recursion - calculate the natural square root of a number.
 * @n: integer
 * Return:  the value of x raised to the power of y.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (search_sqrt_rec(n, 1));
}



/**
 * search_sqrt_rec - search for the square root of n by guessing.
 * @n: the given number integer.
 * @guess: the guessing value, integer.
 * Return: the square for given number.
 */

int search_sqrt_rec(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess >= n)
		return (-1);
	return (search_sqrt_rec(n, guess + 1));
}
