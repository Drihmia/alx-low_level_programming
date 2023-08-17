#include "main.h"

/**
 * times_table - void value
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k >= 0 && k <= 9)
			{
				if (j != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				if (j != 0)
				{
				_putchar(',');
				_putchar(' ');
				}
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
