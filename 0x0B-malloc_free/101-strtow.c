#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: pointer to char contains word separated by spaces.
 * Return: a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i = 0, j, l, there_word, words = 0;
	char **ar_2;

	if (str == NULL || *str == '\0')
		return (NULL);

	while(*str !='\0')
	{
		j = 0;
		there_word = 0;
		for (;*(str + i) == ' '; i++)
			;
		if (*(str + i) != ' ' && *(str + i) !='\0')
		{
			if (words == 0)
				ar_2 = malloc(sizeof(char *));
			else
				ar_2 = realloc(ar_2, (words + 1) * sizeof(char *));
			if (ar_2 == NULL)
			{
				free(ar_2);
				return (NULL);
			}
		}

		while (*(str + i) != ' ' && *(str + i) !='\0')
		{
			there_word = 1;
			i++;
			j++;
		}
		ar_2 [i] = malloc((j + 1) * sizeof(char));
		if (ar_2[i] == NULL)
		{
			free (ar_2[i]);
			return (NULL);
		}
		for (l = 0; l <= j; l++) 
		{
			ar_2[i][l] = *(str + (i - j) + l);
		}
		ar_2[i][l] = '\0';
		if (there_word)
			words += 1;
	}
	return (ar_2);
}
	

