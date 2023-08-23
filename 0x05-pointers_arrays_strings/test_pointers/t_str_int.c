#include <stdio.h>


int main (void)
{
	char c[89] = "         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ";
	int j, i, l = 0, k = 0, sign = 1, ret = 0, minus = 0;

	printf("1 --- %s\n", c);
	while (c[k] != '\0')
	{
		if (c[k] == '-')
			minus++;
		i = 0; 
		for (j = 48; j < 58; j++)
		{
			if (j == c[k])
			{
				l = l * 10 + i;
				break;
			}
			i++;
		}
		k++;
		if (c[k] < '0' || c[k] > '9')
		{
			if (l > 0)
				break;
		}
	}

	if (minus % 2 != 0)
		sign = -1;
	ret = sign * l;
	printf("2 --- %d\n", ret);
	return (0);
}
