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
	int i = 0, j, there_word, words = 0;
	char **ar_2;

	if (str == NULL || str == "")
		return (NULL);

	while(*str)
	{
		there_space = 0;
		for (*(str + i) == ' '; i++)
		while (*(str + i) != ' ')
		{
			there_word = 1;
			i++;
		}
		if (there_word)
		{
			words += 1;
			there_word = 0;
		}
	}
	return (ar_2);
}
	

