#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings at m bytes of the src.
 * @dest: pointer to distination.
 * @src: pointer to sourc
 * @n: integer that represent bytes to be concatenated from src.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (src[i] != '\0')
	{
		if (i < n)
			break;
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = *(src + i);
	return (dest);
}
