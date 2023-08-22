#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: integer
 * @n: integer
 * Return: None
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		printf("%d", *a);
		for (i = 1; i < n; i++)
		{
			printf(", %d", *(a + i));
		}
	}
	printf("\n");
}

