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
	}
	else if (n < 0)
	{
		n = -n;
	}
	else
	{
		return (0);
	}
	while ((n >= 0 && n <= 9))
	{
		n %= 10;
	}
	return (n);
}
