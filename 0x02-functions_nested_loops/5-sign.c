#include "main.h"

/**
 * print_sign - void
 * Return: 1 if n is grater than zero
 * and 0 if n is zero
 * and -1 if n is less than zero
 * @n: integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
