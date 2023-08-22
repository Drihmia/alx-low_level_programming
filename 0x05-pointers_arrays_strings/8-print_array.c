#include "main.h"
#include <stdio.h>

int arrlen(int *m);
/**
 * print_array -  prints n elements of an array of integers
 * @a: integer
 * @n: integer
 * Return: None
 */

void print_array(int *a, int n)
{
	int i, *ptr;

	ptr = a;

	printf("sizeof array is %d\n", arrlen(a));
	printf("sizeof *a is %lu\n", sizeof(ptr));
	if ( n == ((sizeof(*a) + 1) / sizeof(a[0])))
	{
		printf("%d", *a);
		for (i = 1; i < n; i++)
		{
			printf(", %d", *(a + i));
		}
	}
	printf("\n");
}
/**
 * arrlen - determine the lenght of a string.
 * @m: integer
 * Return: return the lenght of the given string s.
 */
int arrlen(int *m)
{
	int i;

	i = 0;
	while (*m != '\0')
	{
		m++;
		i++;
	}
	return (i);
}

