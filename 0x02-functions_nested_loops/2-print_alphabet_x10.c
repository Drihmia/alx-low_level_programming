#include "main.h"

/**
 * print_alphabet_x10 - void
 * Return: None
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
