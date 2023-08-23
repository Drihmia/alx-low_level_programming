#include "main.h"
/**
 * cap_string - capitalizes all words after separators of a string.
 * @c: pointer to char.
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?.
 * \", (, ), {, and }.
 * Return: capitalized string after separators.
 */
char *cap_string(char *c)
{
	int i = 0, sep = 0;

	while (c[i] != '\0')
	{
		if ((c[i] >= 97 && c[i] <= 122) && sep == 1)
		{
			c[i] = (c[i] - 'a' + 'A');
			sep = 0;
		}
		else if ((c[i] >= 65 && c[i] <= 92) && sep == 1)
			sep = 0;
		i++;
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == ',')
		{
			sep = 1;
			i++;
		}
		else if (c[i] == ';' || c[i] == '.' || c[i] == '!' || c[i] == '?')
		{
			sep = 1;
			i++;
		}
		else if (c[i] == '\"' || c[i] == '(' || c[i] == ')')
		{
			sep = 1;
			i++;
		}
		else if (c[i] == '{' || c[i] == ')')
		{
			sep = 1;
			i++;
		}
	}
	return (c);
}

