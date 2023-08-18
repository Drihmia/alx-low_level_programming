#include "main.h"
#include <stdio.h>
int _pow(int m, int n);
int _len(int n);
void print_m(int n);
void print_4(int n);
void print_6(int n);
void print_5(int n);
void print_3(int n);
void print_2(int n);
void print_1(int n);


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
	int k;

	k = _len(a);
	printf("the length of this number is %d\n", k);
	if ((a <= 9) && (a >= -9))
		print_1(a);
	else if ((a >= 10 && a <= 99) || (a <= -10 && a > -100))
		print_2(a);
	else if ((a > 99 && a < 1000) || (a < -99 && a > -1000))
		print_3(a);
	else if ((a > 999 && a < 10000) || (a < -999 && a > -10000))
		print_4(a);
	else if ((a > 9999 && a < 100000) || (a < -9999 && a > -100000))
		print_5(a);
	else
		print_m(a);
}

/**
 * print_m - print m digits
 * @n: integer
 * Return: None
 */
void print_m(int n)
{
	int a, i;

	a = _len(n);
	if (n >= 0)
	{
		_putchar((n / _pow(10, a)) + '0');
		for (i = 1; i < a; i++)
		{
			_putchar((n / _pow(10, (a - 1))) % 10 + '0');
		}
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(-(n / _pow(10, a)) + '0');
		for (i = 1; i < a; i++)
		{
			_putchar(-(n / _pow(10, a - 1)) % 10 + '0');
		}
		_putchar(-(n % 10) + '0');
	}
}



/**
 * print_6 - print 6 digits
 * @n: integer
 * Return: None
 */
void print_6(int n)
{
	if (n < -9999 && n > -100000)
	{
		_putchar('-');
		_putchar(-(n / 10000) + '0');
		_putchar(-(n / 1000) % 10 + '0');
		_putchar(-(n / 100) % 10 + '0');
		_putchar(-(n / 10) % 10 + '0');
		_putchar(-n % 10 + '0');
	}
	else if (n > 9999 && n < 100000)
	{
		_putchar((n / 10000) + '0');
		_putchar((n / 1000) % 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
/**
 * print_5 - print 5 digits
 * @n: integer
 * Return: None
 */
void print_5(int n)
{
	if (n < -9999 && n > -100000)
	{
		_putchar('-');
		_putchar(-(n / 10000) + '0');
		_putchar(-(n / 1000) % 10 + '0');
		_putchar(-(n / 100) % 10 + '0');
		_putchar(-(n / 10) % 10 + '0');
		_putchar(-n % 10 + '0');
	}
	else if (n > 9999 && n < 100000)
	{
		_putchar((n / 10000) + '0');
		_putchar((n / 1000) % 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
/**
 * print_4 - print 4 digits
 * @n: integer
 * Return: None
 */
void print_4(int n)
{
	if (n < -999 && n > -10000)
	{
		_putchar('-');
		_putchar(-(n / 1000) + '0');
		_putchar(-(n / 100) % 10 + '0');
		_putchar(-(n / 10) % 10 + '0');
		_putchar(-n % 10 + '0');
	}
	else if (n > 999 && n < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}

/**
 * print_3 - print 3 digits
 * @n: integer
 * Return: None
 */
void print_3(int n)
{
	if (n < -99 && n > -1000)
	{
		_putchar('-');
		_putchar(-(n / 100) + '0');
		_putchar(-((n / 10) % 10) + '0');
		_putchar(-(n % 10) + '0');
	}
	else if (n > 99 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
/**
 * print_2 - print 2 digits
 * @n: integer
 * Return: None
 */
void print_2(int n)
{
	if (n >= 10 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n <= -10 && n > -100)
	{
		_putchar('-');
		_putchar(-(n / 10) + '0');
		_putchar(-(n % 10) + '0');
	}
}

/**
 * print_1 - print 1 digits
 * @n: integer
 * Return: None
 */
void print_1(int n)
{
	if (n <= 9)
		_putchar(n + '0');
	else if (n >= -9)
	{
		_putchar('-');
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
		n = -n;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/**
 * _pow - raised to the power of n
 * @m: the base is an integer
 * @n: the exponent is an integer
 * Return: gives m raised to n
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
