#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int word_count(char *str);

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
	if (word_count(str) == 0)
		return (NULL);
	else
		ar_2 = malloc(1 + word_count(str) * sizeof(char *));
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
				free(ar_2);
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
	tmp = realloc(ar_2, (words + 1) * sizeof(char *));
	if (tmp == NULL)
	{
		free(tmp);
		free(ar_2);
		return (NULL);
	}
	ar_2 = tmp;
	tmp = NULL;
	return (ar_2);
}

/**
 * word_count - count the number of word in a text.
 * @str: pointer to string that hold the text.
 * Return: number of words.
 */

int word_count(char *str)
{
	int count = 0, i = 0, word;

	while (*(str + i) != '\0')
	{
		word = 0;
		for (; *(str + i) == ' '; i++)
			;
		while (*(str + i) != ' ' && *(str + i) != '\0')
		{
			i++;
			word = 1;
		}
		if (word == 1)
			count++;
	}
	return (count);
}

