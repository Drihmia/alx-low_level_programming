#include "main.h"

/**
 * _strncpy - copie tring from src to dest and the buffer.
 * @dest: pointer to char.
 * @src: pointer to char.
 * @n: integer that represent the lenght  of src to copie.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
