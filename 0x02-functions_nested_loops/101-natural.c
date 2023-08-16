#include <stdio.h>

/**
 * main - integer
 * @sum: sum of öultiple of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i, sum;

	for (i = 1; i < 10; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
	}
	return (0);
}
