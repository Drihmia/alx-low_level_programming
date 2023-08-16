#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	long long int i, a, b;
	i = 2;
	a = 1;
	b = 2;

	while (i <= 50)
	{
		printf("%lld",a);
		printf(", ");
		printf("%lld",b);
		if (b != 20365011074)
		{	
			printf(", ");
		}
		a = a + b;
		b = a + b;
		i+=2;
	}
	return (0);
}
