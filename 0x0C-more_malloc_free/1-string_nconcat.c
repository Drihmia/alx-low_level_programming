#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to char for string 1.
 * @s2: pointer to char for string 2.
 * @n: the 1st No. of bytes from s2 to be concatenated to s1.
 * Return: pointer to new allocated space in memory of concatenation.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, l, k, len_1 = 0, len_2 = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; ++i)
	len_1 = i + 1;
	for (j = 0; *(s2 + j) != '\0'; j++)
	len_2 = j + 1;
	if (n >= len_2)
		n = len_2;
	len = len_1 + n + 1;
	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	l = 0;
	k = 0;
	while (l < len - 1)
	{
		if (l < len_1 && *(s1 + l) != '\0')
			*(ptr + l) = *(s1 + l);
		else
		{
			*(ptr + l) = *(s2 + k);
			k++;
		}
		l++;
	}
	*(ptr + l) = '\0';
	return (ptr);
}






