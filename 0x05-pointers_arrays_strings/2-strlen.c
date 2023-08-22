#include "main.h"
#include <stdio.h>

/**
 * _strlen - determine the lenght of a string.
 * @s: character.
 * Return: return the lenght of the given string s.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++ != '\0')
	{
		i++;
	}
	return (i);
}
