#include <stdio.h>
#include <stdlib.h>


/**
 * main - main function with args from CL.
 * @argc: counter.
 * @argv: pointer to pointer to char.
 * Return: 0 on succeeded.
 */
int main(int argc, char **argv)
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}

