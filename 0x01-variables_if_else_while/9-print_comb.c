#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 56; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar(57);
	putchar(10);

	return (0);
}
