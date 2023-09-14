#include "3-calc.h"

/**
 * main - take arguments from CL and call functions.
 * @argc: count argument.
 * @av: array of pointers.
 * Return: zero if succeeded.
 */

int main(int argc, char **av)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (av[2][0] == '/' || av[2][0] == '%')
	{
		if (atoi(av[3]) == 0)
		{
			printf("Error\n");
			exit(100);
		}

	}
	printf("%d\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));
	return (0);
}
