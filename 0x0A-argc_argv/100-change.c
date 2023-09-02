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
	int money, coins = 0;

	if (argc == 2)
	{
		if (money <= 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", money);
			while (money != 0)
			{
				if (money >= 25)
				{
					coins += money / 25;
					money = money - 25 * coins;
				}
				else if (money < 25 && money >= 10)
				{
					coins += money / 10;
					money = money - 10 * coins;
				}
				else if (money < 10 && money >= 5)
				{
					coins += money / 5;
					money = money - 5 * coins;
				}
				else if (money < 5 && money >= 2)
				{
					coins += money / 2;
					money = money - 2 * coins;
				}
				else
				{
					coins += 1;
					money = 0;
				}
			}
			printf("%d\n", coins);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
