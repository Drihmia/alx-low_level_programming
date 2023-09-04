#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int len_2_str(char *st1, char *st2);

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the 1st string.
 * @s2: pointer to the 2nd string.
 * Return: pointer to newly allocated space that contains s1 + s2.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *np;


	np = malloc((len_2_str(s1, s2) + 1) * sizeof(char));

	if (np == NULL)
		return (NULL);
	while (i < len_2_str(s1, s2))
	{
		if (i < len_2_str(s1, ""))
			*(np + i) = *(s1 + i);
		else if (i >= len_2_str(s1, ""))
		{
			*(np + i) = *(s2 + j);
			j++;
		}
		i++;
	}
	*(np + i) = '\0';
	return (np);
}

/**
 * len_2_str - give the length of 2 str, termonator is excluded.
 * @st1: pointer to the 1st string.
 * @st2: pointer to the 2nd string.
 * Return: lenght in digit.
 */

int len_2_str(char *st1, char *st2)
{
	int len;
	if (st1 != NULL && st2 == NULL)
		len = strlen(st1);
	if (st1 == NULL && st2 != NULL)
		len = strlen(st2);
	if (st1 == NULL && st2 == NULL)
		len = 0;
	return (len);
}
