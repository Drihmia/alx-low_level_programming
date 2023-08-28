#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 * @a: array.
 * Return: None.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int N_rows = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < N_rows; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

