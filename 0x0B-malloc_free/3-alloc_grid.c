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
	int **ar_2 = NULL, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar_2 = malloc(height * sizeof(int *));

	if (ar_2 == NULL)
	{
		free(ar_2);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar_2[i] = malloc(width * sizeof(int));
		if (ar_2[i] == NULL)
		{
			for (j = i; j > 0; j--)
				free(ar_2[j]);
			free(ar_2);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ar_2[i][j] = 0;
	}
	return (ar_2);
}
