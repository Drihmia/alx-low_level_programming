#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 * Return: The integer value
 */
int _atoi(char *s)
{
	int j, i, l = 0, k = 0, sign = 1, ret = 0, minus = 0;

	while (s[k] != '\0')
	{
		if (s[k] == '-')
			minus++;
		i = 0;
		for (j = 48; j < 58; j++)
		{
			if (j == s[k])
			{
				l = l * 10 + i;
				break;
			}
			i++;
		}
		k++;
		if (s[k] < '0' || s[k] > '9')
		{
			if (l != 0)
				break;
		}
	}

	if (minus % 2 != 0)
		sign = -1;
	ret = sign * l;
	return (ret);
}
