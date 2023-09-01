#include <stdio.h>
int col(int i, int n);

int main()
{
	printf("%d -> ", col(1, 2));
}

int col(int i, int n)
{
	if (n % 2 == 0)
	{
		i++;
		col(i ,n / 2);
	}
	else if (n % 2 != 0)
	{
		i++;
		col(i ,3 * n + 1);
	}
	else if ( n == 1)
		return i;
	return i;
}
