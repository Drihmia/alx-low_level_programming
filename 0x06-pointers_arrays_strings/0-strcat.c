#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: pointer to distination.
 * @src: pointer to source
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + j) != '\0')
	{
		j++;
	}
	while (*(src + i) != '\0')
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = *(src + i);
	return (dest);
}
