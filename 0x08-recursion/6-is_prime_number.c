#include "main.h"
int search_prime_num(int n, int guess);

/**
 * is_prime_number - checks whether a number is prime or not.
 * @n: the given number, integer.
 * Return: integer 1 if it's a prime or 0 if not.
 */

int is_prime_number(int n)
{
	if (n == 1 || n == 0)
		return (0);
	else if (n < 0)
		return (0);
	return (search_prime_num(n, 2));
}

/* before in enter this function, i have excluded divisibility by 1, */
 /* and i have set the guess parameter on 2.*/
/**
 * search_prime_num - searching for prime number by guessing from 2 to n - 1.
 * @n: the given number to check integer.
 * @guess: the guessing number.
 * Return: integer, 1 if n is prime and 0 if n is not.
 */

int search_prime_num(int n, int guess)
{
	/* excluding the divisibility by itself */
	if (guess < n)
	{
		if (n % guess == 0)
			return (0);
		return (search_prime_num(n, guess + 1));
	}
	return (1);
}
