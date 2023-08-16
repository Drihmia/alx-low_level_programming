#include "main.h"

/**
 * print_times_table - void value
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 0)
	{
		if(n < 15)
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					k = i * j;
					if (k >= 0 && k <= 9)
					{
						if (j != 0)
						{
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
							_putchar(' ');
						}
						_putchar(k + '0');
					}
					else if (k >= 10 && k <= 99)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(k / 10 + '0');
						_putchar(k % 10 + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(k / 100 + '0');
						_putchar((k / 10) % 10 + '0');
						_putchar(k % 10 + '0');
					}
				}
				_putchar('\n');
			}
		}
	}
}
