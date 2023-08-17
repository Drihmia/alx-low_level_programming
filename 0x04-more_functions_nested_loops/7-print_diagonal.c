#include "main.h"

/**
 * print_diagonal - print a line of n underscore
 * @n: integer
 * Return: None
 */
void print_diagonal(int n)
{
	int  i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = j; i > 0; i--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
