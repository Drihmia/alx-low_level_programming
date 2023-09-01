#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: the count parameter, integer.
 * @argv: pointer to array
 * Return: 0 if all is okey.
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", *(argv + i));
	}
	return (0);
}
