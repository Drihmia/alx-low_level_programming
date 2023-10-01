#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int ref = 2772, sum = 0, holder, i = 0;
	char str[100];

	srand(time(NULL));
	while (sum != ref)
	{
		holder = rand() % 128;
		if (holder >= 40 && holder <= 128)
		{
			if (sum < ref)
			{
				sum += holder;
				str[i] = holder;
				i++;
			}
			else if (sum > ref)
			{
				sum -= holder;
				i--;
			}
		}
	}
	str[i] = '\0';
	printf("%s", str);
	return (0);
}
