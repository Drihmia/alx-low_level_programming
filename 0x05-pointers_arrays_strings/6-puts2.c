#include "main.h"
#include <stdio.h>

/**
 * _puts2 - print a string to stdout
 * @str: string
 * Return: None.
 */
void _puts2(char *str)
{
	int i;

	i = 0;
	while (i < _strlen(str))
	{
		_putchar(*(str + i));
		i += 2;
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
