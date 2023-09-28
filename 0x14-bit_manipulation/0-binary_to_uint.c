#include "main.h"
#include <string.h>


/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: he converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 & b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, hold = 0, pow = 1;
	int i = 0, digit;

	if (!b)
		return (0);
	i = strlen(b) - 1;
	while (i >= 0)
	{
		digit = b[i] - 48;
		if (digit != 0 && digit != 1)
			return (0);
		hold = (digit) * pow;
		num += hold;
		pow = pow * 2;
		i--;
	}
	return (num);
}


