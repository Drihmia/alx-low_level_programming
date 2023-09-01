#include <stdio.h>
int col(int n);

int main()
{
	printf("%d -> ", col(27));
}

int col(int n)
{
	int i = 0;
	while ( n != 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else if (n % 2 != 0)
			n = 3 * n + 1;
		i++;
	}
	return i;
}
