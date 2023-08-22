#include "main.h"
#include <stdio.h>

/**
 * rev_string - print a reversed string to stdout followd by a new line
 * @s: string
 * Return: None.
 */
void rev_string(char *s)
{
	int j;

	j = _strlen(s) - 1;
	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}

/**
 * _strlen - determine the lenght of a string.
 * @s: character.
 * Return: return the lenght of the given string s.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
