#include "main.h"

/**
 * more_numbers - void value
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 1)
			{
				if (j == 5)
					break;
				_putchar('1');
			}
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
