#include "main.h"

/**
 * print_co_sp - print a comma and spaces before each number a
 * @a: integer
 * Return: None
 */
void print_co_sp(int a)
{
	if (a >= 0 && a <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if (a >= 10 && a <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * isgreater_0_lower_15 - check If m is greater than 15 or less than 0
 * @m: integer
 * Return: 1 is True
 */
int isgreater_0_lower_15(int m)
{
	if (m >= 0)
	{
		if (m < 15)
		{
			return (1);
		}
		return (0);
	}
	return (0);
}

/**
 * print_times_table - void value
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (isgreater_0_lower_15(n))
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
						print_co_sp(k);
					}
					_putchar(k + '0');
				}
				else if (k >= 10 && k <= 99)
				{
					print_co_sp(k);
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					print_co_sp(k);
					_putchar(k / 100 + '0');
					_putchar((k / 10) % 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
