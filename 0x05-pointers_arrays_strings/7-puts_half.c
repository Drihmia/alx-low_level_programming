#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 * Return: None.
 */
void puts_half(char *str)
{
	int i, l;

	l = _strlen(str);
	if ( l % 2 == 0)
		i = (l / 2);
	else
		i = ((l + 1) /  2);
	while (i < l)
	{
		_putchar(*(str + i));
		i += 1;
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
