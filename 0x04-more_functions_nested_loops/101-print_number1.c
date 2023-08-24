#include "main.h"

int _pow(int m, int n);
int _len(int n);


/**
 * print_number - print integers
 * @n: integer
 * Return: None
 */
void print_number(int n)
{
	int a, i;

	a = _len(n);
	if (n >= 0)
	{
		if (n > 9)
		{
			_putchar((n / _pow(10, a - 1)) + '0');
			for (i = 2; i < a; i++)
			{
				_putchar((n / _pow(10, (a - i))) % 10 + '0');
			}
		}
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar('-');
		if (n < -9)
		{
		_putchar(-(n / _pow(10, a - 1)) + '0');
		for (i = 2; i < a; i++)
		{
			_putchar(-(n / _pow(10, a - i)) % 10 + '0');
		}
		}
		_putchar(-(n % 10) + '0');
	}
}
/**
 * _len - give a length of un integer.
 * @n: integer
 * Return: number of digit in n
 */

int _len(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		while (n <= -1)
		{
			n /= 10;
			i++;
		}
		return (i);
	}
	else
	{
		if (n == 0)
			return (1);
		while (n >= 1)
		{
			n /= 10;
			i++;
		}
		return (i);
	}
}
/**
 * _pow - raised m to the power of n
 * @m: the base is an integer
 * @n: the exponent is an integer
 * Return: m raised to n
 */

int _pow(int m, int n)
{
	int r, i;

	r = 1;
	for (i = 0; i < n; i++)
	{
		r *= m;
	}
	return (r);
}
