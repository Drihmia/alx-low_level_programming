#include "main.h"
#include <stdio.h>
#include <ctype.h>
size_t count_characters(const char *str);

/**
 * print_buffer - print a buffer
 * @b: pointer to char.
 * @size: integer
 * Return: None
 */
void print_buffer(char *b, int size)
{
	int i, j, k, l = 0, non_p;

	while (l < size)
	{
		non_p = isprint(*(b + l));
		if (non_p == 0)
		{
			*(b + l) = '.';
		}
		l++;
	}
	i = 0;
	while (i < size)
	{
		printf("%010x: ", i);
		for (j = i; j < 10 + i; j++)
		{
			printf("%02x", b[j]);
			if (j % 2 == 1)
				printf(" ");
			if (j > size)
				break;
				
		}
		for (k = i; k < 10 + i; k++)
			printf("%c", b[k]);
			if (k > size)
				break;
		printf("\n");
		i += 10;
	}
}

size_t count_characters(const char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	return (count);
}

