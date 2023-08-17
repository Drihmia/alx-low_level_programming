#include "main.h"

/**
 * print_line - print a line of n underscore
 * @n: integer
 * Return: None
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
