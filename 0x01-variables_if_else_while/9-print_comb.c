#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */

int main(void)
{
	/* @m: character and newline*/
	int i;


	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}		
	}
	putchar(10);

	return (0);
}
