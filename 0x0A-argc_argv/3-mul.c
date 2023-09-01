#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: the count parameter, integer.
 * @argv: pointer to array
 * Return: 0 if all is okey.
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
