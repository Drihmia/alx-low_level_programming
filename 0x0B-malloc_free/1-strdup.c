#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - gives a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the given string.
 * Return: new pointer to the copy of str.
 */

char *_strdup(char *str)
{
	unsigned long int i = 0;
	char *np;

	if (str == NULL)
		return (NULL);

	np = malloc(strlen(str) * sizeof(char));

	if (np == NULL)
		return (NULL);
	while (i <= strlen(str))
	{
		*(np + i) = *(str + i);
		i++;
	}
	return (np);
}
