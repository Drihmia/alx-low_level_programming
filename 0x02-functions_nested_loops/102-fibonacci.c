#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	long int i, a, b;

	i = 2;
	a = 1;
	b = 2;

	while (i <= 50)
	{
		printf("%ld", a);
		printf(", ");
		printf("%ld", b);
		if (b != 20365011074)
		{
			printf(", ");
		}
		a = a + b;
		b = a + b;
		i += 2;
	}
	printf("\n");
	return (0);
}
