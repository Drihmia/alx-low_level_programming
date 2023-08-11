#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%lld is negative",n);
	else if (n < 0)
		printf("%lld is positive",n);
	return (0);
}
