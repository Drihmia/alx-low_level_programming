#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: N. of elemet of the array.
 * @size: size of each elements.
 * Return: pointer to allocated memroy, and NULL if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		exit(0);

	ar = malloc(size * nmemb);

	if (ar == NULL)
	{
		free(ar);
		exit(0);
	}
	for (i = 0; i < nmemb; i++)
		ar[i] = 0;
	return (ar);
}
