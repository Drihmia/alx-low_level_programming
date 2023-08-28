#include "main.h"

/**
 * _memcpy - copies memory area fron src to dest by n bytes.
 * @src: pointer to the source.
 * @dest: pointer to destination.
 * @n: nomber of byte to copie is an unsigned integer.
 * Return: pointer to dest as char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
