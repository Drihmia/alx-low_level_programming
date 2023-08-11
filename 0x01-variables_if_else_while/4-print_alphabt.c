#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 113 | i != 101)
			putchar(i);
	}
	putchar(10);
	return (0);
}
