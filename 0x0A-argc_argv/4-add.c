#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: the count parameter, integer.
 * @argv: pointer to array
 * Return: 0 if all is okey and 1 if any number caontain symbols.
 */
int main(int argc, char **argv)
{
	int i, add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(*(argv + i)) != 0)
				add += atoi(*(argv + i));
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
