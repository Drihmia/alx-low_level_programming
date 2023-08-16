#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit on n
 * @n: integer
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else if (n < 0)
	{
		n = -n;
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
