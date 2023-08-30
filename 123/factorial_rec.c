#include <stdio.h>
int fac(int n);

int main(void)
{
	printf("%d\n", fac(12));
	
}

int fac(int n)
{
	if ( n == 1)
		return 1;
	else
		return n*fac(n - 1);
}

