#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int a, b;

	i = 2;
	a = 1;
	b = 2;

	while (i <= 98)
	{
		printf("%lu, ", a);
		printf("%lu, ", b);
		a = (unsigned long long)a + (unsigned long long)b;
		b = (unsigned long long)a + (unsigned long long)b;
		i += 2;
	}
	printf("...\n");
	return (0);
}
