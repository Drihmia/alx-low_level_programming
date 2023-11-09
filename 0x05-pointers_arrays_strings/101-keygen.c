#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
	printf("-- 1t -- %d\n", holder);
			if (sum < ref)
			{
	printf("-- 1 -- %d\n", holder);
				str[i] = holder, i++;
	printf("-- 2 -- %s\n", str);
				sum += holder;
	printf("-- 3 -- %d\n", sum);
				diff = ref - sum;
				if ((diff) % 44 == 0 || (diff)/44 <= 4)
				{
					while (sum < ref)
					{
						str[i] = 44;
						sum += 44;
	printf("-- 4 -- %s\n", str);
	printf("-- 5 -- %d\n", sum);
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
