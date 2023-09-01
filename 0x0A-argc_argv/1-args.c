#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the count parameter, integer.
 * @argv: pointer to array
 * Return: 0 if all is okey.
 */
int main(int argc, char **argv)
{
	(void)argv;
	if (argc >= 1)
		printf("%d\n", argc - 1);
	return (0);
}
