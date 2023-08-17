#include "main.h"

/**
 * _isupper - void
 * Return: 1 if successfully
 * @c: integer
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 92)
		return (1);
	else
		return (0);
}
