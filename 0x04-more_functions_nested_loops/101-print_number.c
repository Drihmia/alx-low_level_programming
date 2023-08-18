#include "main.h"

/**
 * print_number - print integers
 * @n: integer
 * Return: None
 */
void print_number(int n)
{
	print_digits(n);
}

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
		else if (a > 999 && a <= 9999)
		{
			_putchar(a/1000 + '0');
			_putchar((a/100)%10 + '0');
			_putchar((a/10)%10 + '0');
			_putchar(a%10 + '0');
		}
	}
	else
	{
		if (a >= -9)
		{
			_putchar('-');
			_putchar(-(a % 10) + '0');
		}
		else if (a <= -10 && a >= -99)
		{
			_putchar('-');
			_putchar(-(a / 10) + '0');
			_putchar(-(a % 10) + '0');
		}
		else if (a < -99 && a >= -999)
		{
			_putchar('-');
			_putchar(-(a / 100) + '0');
			_putchar(-((a / 10) % 10) + '0');
			_putchar(-(a % 10) + '0');
		}
		else if (a < -999 && a >= -9999)
		{
			_putchar(-(a/1000) + '0');
			_putchar(-(a/100)%10 + '0');
			_putchar(-(a/10)%10 + '0');
			_putchar(-a%10 + '0');
		}
	}
}
