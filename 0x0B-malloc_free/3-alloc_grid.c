#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - allocate a 2 dimensional array of integers.
 * @width: c lenght of rows.
 * @height: r lenght of columns.
 * Return: a pointer to that array.
 */
int **alloc_grid(int width, int height)
{
	int **ar_2 = NULL, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar_2 = malloc(height * sizeof(int *));

	if (ar_2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar_2[i] = calloc(width, sizeof(int));
		if (ar_2[i] == NULL)
		{
			return (NULL);
		}
	}
	return (ar_2);
}
