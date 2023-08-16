#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long long int a, b;

	i = 2;
	a = 1;
	b = 2;

	while (i <= 98)
	{
		printf("%llu, ", a);
		printf("%llu, ", b);
		a = a + b;
		b = a + b;
		i += 2;
	}
	printf("...\n");
	return (0);
}
