#include "main.h"
#include <stdio.h>

/**
 * swap_int- udpate the value into 98 of any pointer.
 * @n: integer
 * @p: integer
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int p, n;

	p = *a;
	n = *b;
	*a = n;
	*b = p;
}
