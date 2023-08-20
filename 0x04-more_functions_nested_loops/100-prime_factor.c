#include <stdio.h>
#include <math.h>

int prime_nums_of(unsigned long int n, int ch);
unsigned long int _isdivisible(unsigned long int x, unsigned long int y);


/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	unsigned long int num;

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

unsigned long int _isdivisible(unsigned long int x, unsigned long int y)
{
	while (x % y == 0)
	{
		/*printf("one of prime factors of %14lu\t",x);*/
		printf("    is : %7lu \n", y);
		x = x / y;
	}
	return (x);
}

/**
 * prime_nums_of - giving the prime numbers of number n.
 * this function gives  prime numbers fron 2 to the given n.
 * @n: the target number.
 * @ch:choice to print: 1 for Yes and 0 for No.
 * Return: the prime numbers.
 */

int prime_nums_of(unsigned long int n, int ch)
{
	unsigned long int i, j;
	int l;

	for (i = 2; i <= n; i++)
	{
		l = 0;
		/* check how many time n is divisible by i */
		if (n % i == 0)
		{
			j = i;
			while (j > 0)
			{
				if (i % j == 0)
				l += 1;
				j--;
			}
		}
		/* l == 2 means i is divisible only by 1 and itself */
		if (l == 2)
		{

			if (ch == 1)
				printf("%lu is prime numbers \n", i);
			n = _isdivisible(n, i);
			if (n >= 1)
				break;
			i = 1;
		}
	}
	return (0);
}
