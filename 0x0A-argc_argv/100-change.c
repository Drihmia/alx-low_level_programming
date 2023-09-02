#include "main.h"
#include <stdlib.h>
int change(int money);


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
		{
			printf("%d\n", change(money));
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
 * change - give number of coins to make change for an amount
 * of money.
 * @money: amount money.
 * Return: number of coins to make change.
 */

int change(int money)
{
	int coins = 0;

		while (money >= 25)
		{
			coins++;
			money -= 25;
		}
		while (money < 25 && money >= 10)
		{
			coins++;
			money -= 10;
		}
		while (money < 10 && money >= 5)
		{
			coins++;
			money -= 5;
		}
		while (money < 5 && money >= 2)
		{
			coins++;
			money -= 2;
		}
		if (money == 1)
		{
			coins++;
			money = -1;
	}
	return (coins);
}
