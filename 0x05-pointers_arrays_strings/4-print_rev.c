#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a reversed string to stdout followd by a new line
 * @s: string
 * Return: None.
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) + 1;
	while (i > 0)
	{
		_putchar(*(s + i));
		i--;
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
