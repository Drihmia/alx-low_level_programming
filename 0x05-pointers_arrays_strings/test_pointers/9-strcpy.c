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
	/* in for while i can use alo s[i] ! = '\0' */
	while (*(src + i) != '\0')
	{
		/* i can use also *(dest + i) = *(src +i) */
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
