#include "main.h"
#include <stddef.h>


/**
 * _strstr -  finds the first occurrence of the substring needle
 * in the string haystack.
 * @needle: pointer the a string.
 * @haystack: pointer to a string to find in needle
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;
	char *p = NULL;

	if (*(needle + i) == '\0')
		return (p);
	while (*(needle + i))
	{
		j = 0;
		while (*(haystack + j) != *(needle + i) && *(haystack + j))
		{
			j++;
		}
		if (*(haystack + j) == *(needle + i))
		{
			p = (haystack + j);
			break;
		}
		i++;
	}
	return (p);
}
