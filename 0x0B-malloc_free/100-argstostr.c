#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of my program.
 * @ac: the argument counter.
 * @av: pointer to pointer to char, argument variable.
 * Return: pointer to new string that concatenates all my argvs.
 */
char *argstostr(int ac, char **av)
{
	int i, j, sum = 0, l;
	char *str;

	for (i = 0; i < ac; i++)
	{
		sum += strlen(av[i]) + 2;
	}
	str = malloc(sum * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	i = 0, l = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[l] = av[i][j];
			j++, l++;
		}
		str[l] = '\n';
		i++;
		l++;
	}
		str[l] = '\0';
	return (str);
}
