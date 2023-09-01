#include "main.h"

/**
 * _strcpy - copie the address from src to dest and the buffer.
 * @dest: pointer to char.
 * @src: pointer to char
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
