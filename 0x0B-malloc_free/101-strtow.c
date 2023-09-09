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
	int i = 0, j, l, k, there_word, words = 0;
	char **ar_2, **tmp;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*(str + i) != '\0')
	{
		j = 0;
		there_word = 0;
		if (*(str + i) != ' ' && *(str + i) != '\0')
		{
			if (words == 0)
				tmp = malloc(1 * sizeof(char *));
			else
				tmp = realloc(ar_2, (words + 1) * sizeof(char *));
			if (tmp == NULL)
			{
				free(tmp);
				return (NULL);
			}
			ar_2 = tmp;
			tmp = NULL;
		}
		while (*(str + i) != ' ' && *(str + i) != '\0')
		{
			there_word = 1;
			i++;
			j++;
		}
		if (there_word)
		{
			ar_2[words] = malloc((j + 1) * sizeof(char));
			if (ar_2[words] == NULL)
			{
				for (k = 0; k <= words; k++)
					free(ar_2[k]);
				return (NULL);
			}
			for (l = 0; l < j && j != 0; l++)
			{
				ar_2[words][l] = *(str + (i - j) + l);
			}
			ar_2[words][l] = '\0';
			words += 1;
		}
		for (; *(str + i) == ' '; i++)
			;
		if (*(str + i) == '\0')
		{
			if (words == 0)
			{
				return (NULL);
			}
			else
				break;
		}
	}
	return (ar_2);
}
