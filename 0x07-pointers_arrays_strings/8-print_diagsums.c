#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: integer
 * @size: integer
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_1 = 0, sum_2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum_1 += a[i * size + j];
			if (i + j == size - 1)
				sum_2 += a[j * size + i];
		}
	}
	printf("%d, %d\n", sum_1, sum_2);
}
