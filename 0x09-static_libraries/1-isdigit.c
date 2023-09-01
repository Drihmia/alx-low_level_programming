#include "main.h"

/**
 * _isdigit - checks if a letter is upper.
 * Return: 1 if successfully.
 * @c: integer.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
