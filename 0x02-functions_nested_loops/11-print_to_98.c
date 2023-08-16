#include "main.h"

/**
 * print_to_98 - void
 * Return: void
 */
void print_to_98(int n)
{
	int i, j;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 98 && i <= 99)
			{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			}
			else
			{
			_putchar(i / 100 + '0');
			_putchar((i / 10)%10 + '0');
			_putchar(i % 10 + '0');
			}
			if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
			_putchar('\n');
	}
	else
	{
		for (j = n; j <= 98; j++)
		{
			if (j >= 0)
			{
				if (j >= 10 && j <= 99)
				{
					_putchar(j / 10 + '0');
					_putchar(j % 10 + '0');
				}
				else
				_putchar(j + '0');
			}
			else
			{
				if (j <= -10 && j >= -99)
				{
				_putchar('-');
				_putchar(-(j / 10) + '0');
				_putchar(-(j % 10) + '0');
				}
				else
				{
				_putchar('-');
				_putchar(-(j) + '0');
				}
			}
			if (j != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
