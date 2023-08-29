#include "main.h"
#include <stddef.h>
#include <string.h>


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
	int i = 0, j, found = 0, out = 0, k;
	char *p = NULL;

	if (*(needle + i) == '\0')
		return (*haystack);
	while (*(haystack + i))
	{
		/* if the 1st occurrence is found then found is True */
		if (*(haystack + i) == *needle)
		{
			found = 1;
			k = i;
		}
		j = 0;

		/* found a match and we star compairing fron that match and on */
		while (*(haystack + i) == *(needle + j) && found == 1 && *(haystack + i))
		{
			i++;
			j++;

			if (!*(needle + i))
			{
				i--;
				j--;
				out = 1;
				return ((haystack + k));
				break;
			}
		}
		if (*(needle + j) != '\0' && out == 0)
			break;
		if (out)
			break;
		i++;
	}
	return (p);
}
