#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: int 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int n = 1;
	char *red = (char *)&n;

	return (*red);
}
