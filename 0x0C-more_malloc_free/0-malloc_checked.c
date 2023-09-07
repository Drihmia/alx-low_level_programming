#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size to be allocated.
 * Return: void pointer with 1st adrees of allocated block of memory.
 */

void *malloc_checked(unsigned int b)
{
	char* p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
