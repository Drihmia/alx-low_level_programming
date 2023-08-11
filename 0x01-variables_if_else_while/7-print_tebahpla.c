#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */

int main(void)
{
	int i;

	/* for - looping from equvalents of a to z in ASCII */
	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
