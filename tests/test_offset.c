#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	putchar(n/100 + '0');
	putchar(' ');
	putchar((n/10)%10 + '0');
	putchar(' ');
	putchar(n%10 + '0');
}

