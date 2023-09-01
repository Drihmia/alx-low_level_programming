#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: the count parameter, integer.
 * @argv: pointer to array
 * Return: 1 if nomber of argument is not 1, and 0 if it is.
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (atoi(argv[argc - 1]) < 0)
		{
			printf("0\n");
		}
		else
			printf("%d\n", change_recursion(atoi(argv[argc - 1]), 0));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * change_recursion - give number of coins to make change for an amount
 * of money.
 * @money: amount money.
 * @N_coins: nomber of coins needed for change.
 * Return: number of coins to make change.
 */

int change_recursion(int money, int N_coins)
{
	if (money >= 25)
	{
		N_coins += money / 25;
		money = money - 25 * N_coins;
		return (change_recursion(money, N_coins));
	}
	else if (money >= 10)
	{
		N_coins += money / 10;
		money = money - 10 * N_coins;
		return (change_recursion(money, N_coins));
	}
	else if (money >= 5)
	{
		N_coins += money / 5;
		money = money - 5 * N_coins;
		return (change_recursion(money, N_coins));
	}
	else if (money >= 2)
	{
		N_coins += money / 2;
		money = money - 2 * N_coins;
		return (change_recursion(money, N_coins));
	}
	else if (money == 1)
	{
		N_coins += money / 1;
		money = money - 1 * N_coins;
		return (change_recursion(money, N_coins));
	}
	return (N_coins);
}
