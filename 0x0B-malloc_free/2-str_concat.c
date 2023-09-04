#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the 1st string.
 * @s2: pointer to the 2nd string.
 * Return: pointer to newly allocated space that contains s1 + s2.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned long int i = 0;
	int j = 0;
	char *np;

	if (s1 ==  NULL || s2 ==  NULL)
		return (NULL);

	np = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (np == NULL)
		return (NULL);
	while (i < strlen(s1) + strlen(s2))
	{
		if (i < strlen(s1))
			*(np + i) = *(s1 + i);
		else if (i >= strlen(s1))
		{
			*(np + i) = *(s2 + j);
			j++;
		}
		i++;
	}
	*(np + i) = '\0';
	return (np);
}
