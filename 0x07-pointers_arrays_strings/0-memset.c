#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer to a buffer.
 * @b: constante byte is char.
 * @n: unsigned integer
 * Return: pointer to the same buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
