#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: the count parameter, integer.
 * @argv: pointer to array
 * Return: o if all is okey.
 */
int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s\n", *argv);
	return (0);
}
