#include "main.h"
int _strlen(char *s);


/**
 * rev_string - print a reversed string to stdout.
 * @s: string
 * Return: None.
 */
void rev_string(char *s)
{
	int i, j;
	char intr;

	j = _strlen(s) - 1;
	for (i = 0; i < j; i++)
	{
		intr = s[i];
		s[i] = s[j];
		s[j] = intr;
		j--;
	}
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
