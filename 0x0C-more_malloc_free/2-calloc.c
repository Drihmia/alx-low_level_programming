#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: N. of elemet of the array.
 * @size: size of each elements.
 * Return: pointer to allocated memroy, and NULL if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(size * nmemb);

	if (ar == NULL)
	{
		return (NULL);
	}
	if (ar != NULL)
	{
		for (i = 0; i < nmemb; i++)
			ar[i] = '\0';
	}
	return (ar);
}
