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
	int i, j, k, non_p;

	i = 0;
	while (i < size)
	{
		printf("%08x: ", i);

		for (j = i; j < 10 + i; j++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");
			if (j % 2 == 1)
				printf(" ");
		}


		for (k = i; k < 10 + i; k++)
		{
			non_p = isprint(*(b + k));
			if (non_p == 1)
				printf("%c", b[k]);
			else
				printf(".");
			if (k + 2 > size)
				break;
		}
		printf("\n");
		i += 10;
	}
}
/**
 * count_characters - print a buffer
 * @str: pointer to char.
 * Return: count
 */

size_t count_characters(const char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	return (count);
}

