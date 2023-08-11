#include <stdio.h>

/**
 * main - integer
 * Return: 0
 */

int main(void)
{
	int i;

	/* for - looping fron equvalents of a to z iin ASCII */
	for (i = 97; i <= 122; i++)
	{
		if (i != 113 )
			if (i != 101)
				putchar(i);
	}
	putchar(10);

	return (0);
}
