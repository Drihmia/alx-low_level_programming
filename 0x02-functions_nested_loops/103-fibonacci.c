#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	long int a, b, sum;

	a = 1;
	b = 2;
	sum = 0;

	while (b <= 4000000)
	{
		if (a % 2 != 0)
		{
			sum += a;
		}
		if (b % 2 != 0)
		{
			sum += b;
		}
		a = a + b;
		b = a + b;
	}
	printf("%ld\n", sum);
	return (0);
}
