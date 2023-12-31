#include "main.h"

/**
 * wildcmp - compares two strings, second string myy contain *.
 * @s1: pointer to string 1.
 * @s2: pointer to string 2.
 * Return: return 1 if 2 string can be considered identical or 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s2 == '*')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 != *s2 && *s2 != '*')
	{
		return (wildcmp(s1 + 1, s2));
	}
	else if (*s1 != *s2 && *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2));
	}

	return (wildcmp(s1 + 1, s2 + 1));
}
