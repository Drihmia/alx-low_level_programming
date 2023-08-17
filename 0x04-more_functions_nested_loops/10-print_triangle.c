#include "main.h"

/**
 * print_triangle - void value
 * @size: integer
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k, l;
	l = size -2;

	if (size > 0)
	{
		/* loop for lines*/
		for (i = 0; i < size; i++)
		{
			for (j = l; j >= 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
			l--;
		}
	}
	else
		_putchar('\n');
}
