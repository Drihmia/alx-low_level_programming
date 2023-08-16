#include "main.h"

/**
 * print_digits - print up to 3 digits of a negative or positive numbers
 * @a: integer
 * Return: None
 */
void print_digits(int a)
{
	if ((a >= 0 && a <= 999))
	{
		if (a <= 9)
			_putchar(a + '0');
		else if (a >= 10 && a <= 99)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		else if (a > 99 && a <= 999)
		{
			_putchar(a / 100 + '0');
			_putchar((a / 10) % 10 + '0');
			_putchar(a % 10 + '0');
		}
	}
	else	
	{
		if (a >= -9)
		{
			_putchar('-');
			_putchar(-(a) + '0');
		}
		if (a <= -10 && a >= -99)
		{
			_putchar('-');
			_putchar(-(a / 10) + '0');
			_putchar(-(a % 10) + '0');
		}
		else
		{
			_putchar(-(a / 100) + '0');
			_putchar(-((a / 10) % 10) + '0');
			_putchar(-(a % 10) + '0');
		}
	}
}

/**
 * print_to_98 - void
 * @n: integer
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
				print_digits(i);
			else
				print_digits(i);
			if (i != 98)
				_putchar(',');
				_putchar(' ');
		}
	}
	else
	{
		for (j = n; j <= 98; j++)
		{
			if (j >= 0)
			{
				if (j >= 10 && j <= 99)
					print_digits(j);
				else
					print_digits(j);
			}
			else
			{
				if (j < 0 && j >= -9)
					print_digits(j);
				else if (j <= -10 && j >= -99)
					print_digits(j);
				else
					print_digits(j);
			}
			if (j != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
