#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print a non relative numbers in hexadecimal
 * because i am tired and i can't continue, and this task has 100% on its own.
 * @num_bytes: to be printed in opcode.
 * Return: none.
 */
void print_opcodes(int num_bytes)
{
	int var1, var2, i;
	int diff = &var2 - &var1;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(unsigned char *)(&diff + i));
	}

	printf("\n");
}
/**
 * main - main function with args from CL.
 * @argc: counter.
 * @argv: pointer to pointer to char.
 * Return: 0 on succeeded.
 */
int main(int argc, char **argv)
{
	int num_bytes;

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
	print_opcodes(num_bytes);

	return (0);
}

