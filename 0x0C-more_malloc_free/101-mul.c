#include <stdio.h>
#include <stdlib.h>
int _digit(char *str);

/**
 * main - multiplies two positive numbers.
 * @argc: the count parameter, integer.
 * @argv: pointer to array
 * Return: 0 if all is okey.
 */
int main(int argc, char **argv)
{

	if (argc == 3)
	{
		if (_digit(*(argv + 1)) && _digit(*(argv + 2)))
			printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

/**
 * _digit - check if a string is composed only of digits.
 * @str: pointer to string.
 * Return: boulen, True if string contains only digits.
 */
int _digit(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) > '9' || *(str + i) < '0')
			return (0);
		i++;
	}
	return (1);
}


