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
	int i, j, digit, num, add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = 0;
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				digit = argv[i][j] - '0';
				if (digit >= 0 && digit <= 9)
					num = num * 10 + digit;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			add += num;
		}
		printf("%d\n", add);
	}
	return (0);
}
