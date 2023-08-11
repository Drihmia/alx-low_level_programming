#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */

int main(void)
{
	/* @m: character and newline*/
	int i;
	int j;


	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
