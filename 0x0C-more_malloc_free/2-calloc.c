#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: N. of elemet of the array.
 * @size: size of each elements.
 * Return: pointer to allocated memroy, and NULL if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(size * nmemb);

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	memset(ar, 0x00, nmemb * size);
	return (ar);
}
