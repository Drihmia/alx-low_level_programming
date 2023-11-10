#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point.
 * Return: None
 */
int main(void)
{
	int ref = 2772, sum = 0, holder, i = 0, diff;
	char str[100];

	srand(time(NULL));
	while (sum != ref)
	{
		holder = rand() % 128;
		if (holder >= 44 && holder <= 126)
		{
			if (sum < ref)
			{
				str[i] = holder, i++;
				sum += holder;
				diff = ref - sum;
				if ((diff) % 44 == 0 || (diff) / 44 <= 4)
				{
				while (sum < ref)
				{
					str[i] = 44;
					sum += 44;
					i++;
					if (sum > ref)
						break;
				}
				}
			}
		}
	}
	str[i] = '\0';
	printf("%s", str);
	return (0);
}

