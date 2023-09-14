#include <stdarg.h>

/**
 * sum_them_all - does the sum of all its parameters.
 * @n: number of parameters.
 * Return: the sum as integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ls, int);
	}
	va_end(ls);
	return (sum);
}
