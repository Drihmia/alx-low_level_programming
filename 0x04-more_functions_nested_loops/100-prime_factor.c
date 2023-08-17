#include <stdio.h>
#include <math.h>
/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	int i, j, k, x, num;
	num = 1231952;
	for (i = 2
	return (0);
}

/**
 * _isdivisible - check if x is divisibile by y and how many times.
 * @x: dividend.
 * @y: divisor.
 * @z: how many times the x is divisible by y.
 * Return: value of z:
 */

int _isdivisible(int x, int y)
{
	int z;

	z = 0;
	while (x % y == 0)
	{
		x = x / y;
		z++;
	}
}

/**
 * prime_nums_of - giving the prime numbers of number n.
 * this function gives  prime numbers fron 2 to square of the given n.
 * @n: the target number.
 * Return: the prime numbers.
 */

int prime_nums_of(int n)
{
	int i, j, x,

	x = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		for (j = 2; j <= i; j++)
		{
			/* check how many time i is divisible by j */
			if (i % j == 0)
				x +=1;
			/* x == 1 means i is divisible only by 1 and itself */
			if (x == 1)
			{
				return x;
			}
		}
	}
}

