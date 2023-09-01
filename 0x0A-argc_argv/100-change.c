#include "main.h"

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: the count parameter, integer.
 * @argv: pointer to array
 * Return: 1 if nomber of argument is not 1, and 0 if it is.
 */
int main(int argc, char **argv)
{
	int money;

	if (argc == 2)
	{
		money = atoi(argv[argc - 1]);
		if (money < 0)
		{
			printf("0\n");
		}
		else
			printf("%d\n", change_recursion(money, 0));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}


