#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer the a string.
 * @accept: pointer to a string to find in s
 * Return: a pointer to the first occurrence of the accept in the string s,
 * or NULL if the character is not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j) != *(s + i) && *(accept + j))
		{
			j++;
		}
		if (*(accept + j) == *(s + i))
			break;
		i++;
	}
	if (*(s + i) == *(accept + j))
		return ((s + i));
	else
		return (0);
}
