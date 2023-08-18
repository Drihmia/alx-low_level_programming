#include <stdio.h>
#include <math.h>

int prime_nums_of(long int n, int ch);
void _isdivisible(long int x, long int y);


/**
 * main - integer
 * Return: 0
 */
int main(void)
{

	long int num;
	num = 612852475143;
	prime_nums_of(num, 0);
	return (0);
}

/**
 * _isdivisible - check if x is divisibile by y and how many times.
 * @x: dividend.
 * @y: divisor.
 * @z: how many times the x is divisible by y.
 * Return: value of z:
 */

void _isdivisible(long int x, long int y)
{
	while (x % y == 0)
	{
		x = x / y;
		printf("The prime factor of %ld are : %ld \n",x, y);
	}
}

/**
 * prime_nums_of - giving the prime numbers of number n.
 * this function gives  prime numbers fron 2 to the given n.
 * @n: the target number.
 * @ch:choice to print: 1 for Yes and 0 for No.
 * Return: the prime numbers.
 */

int prime_nums_of(long int n, int ch)
{
	long int i, j;
	int l;

	for (i = 1; i <= n; i++)
	{
		l = 0;
		for (j = 1; j <= sqrt(i); j++)
		{
			/* check how many time i is divisible by j */
			if (i % j == 0)
				l = l + 1;
		}
		/* l == 1 means i is divisible only by 1 and itself */
		if (l == 1)
		{
			if (i > 1)
			{
				_isdivisible(n, i);
			}
			if (ch == 1)
				printf("%ld is prime numbers \n",i);
		}
	}
	return (0);
}
