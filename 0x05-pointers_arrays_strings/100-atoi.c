#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 * Return: The integer value
 */
int _atoi(char *s)
{
	int j, i, l = 0, k = 0, sign = 1, ret = 0, minus = 0, z = 0;

	while (s[k] != '\0')
	{
		if (s[k] == '-')
			minus++;
		i = 0;
		for (j = 48; j < 58; j++)
		{
			if (j == s[k])
			{
				if (l < 147483640 || i < 8)
					l = l * 10 + i;
				else if (l > 147483640 && i >= 8)
				{
					l = -l * 10 - i;
					z = 1;
					break;
				}
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
	if (z == 1)
		ret = l;
	else
		ret = sign * l;
	return (ret);
}
