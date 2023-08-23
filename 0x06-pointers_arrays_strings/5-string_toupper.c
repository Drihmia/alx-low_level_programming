#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: pointer to character.
 * Return: uppercase string.
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = (c[i] - 'a' + 'A');
		}
		i++;
	}
	return (c);
}
