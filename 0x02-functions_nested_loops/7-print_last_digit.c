#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit on n
 * @n: integer
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n > 0)
		return (n % 10);
	else if (n < 0)
	{
		n = -n;
		return (n % 10);
	}
	else
		return (0);
}
