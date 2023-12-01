#include "main.h"

/**
 * _abs - integer
 * Return: the absolite value of n
 * @n: integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (0);
}
