#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	int ref = 2772, sum = 0, holder;

	srand(time(NULL));
	while (sum != ref)
	{
		holder = rand() % 128;
		if (holder >= 40 && holder <= 128)
		{
		if (sum > ref)
			sum -= holder;
		else if (sum < ref)
			sum += holder;
		}
	}
	return (sum);
}
