#include <stdio.h>
void if_local(int it, int a, int b);

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	int a, b, tempo, it;

	a = 1;
	b = 2;
	it = 2;

	printf("%d, %d", a, b);
	while (it < 98)
	{
		it += 1;
		if (it <= 91)
		{
			tempo = a;
			a = b;
			b = tempo + a;
			printf(", %d", b);
		}
		else if (it == 92)
		{
			if_local(it, a, b);
		}
		if (it >= 92)
		{
			else if (it > 92 && it < 94)
			{
	}
	printf("\n");
	return (0);
}

/**
 * print_92 - print th fibonacci numbers N 92
 * i used same iteration number above to save time.
 * @it: iteration digit.
 * @a: 1st number is integer.
 * @b: 2nd number is an integer.
 * @c: integer for options
 * Return: b_1 if c = 1 and b_2 if c = 2.
 */

int print_92(int a, int b, int it, int c)
{
	int tempo_1, tempo_2, a_1, a_2, b_1, b_2;
	tempo_1 = (a / 10000000000);
	tempo_2 = (a % 10000000000);
	a_1 = (b / 10000000000);
	a_2 = (b % 10000000000);
	b_1 = tempo_1 + a_1;
	b_2 = tempo_2 + a_2;

	printf(", %d%d", b_1, b_2);
	if (c == 1)
		return (b_1);
	if (c == 2)
		return (b_2);
}

/**
 * print_93 - print th fibonacci numbers N 93
 * i used same iteration number above to save time.
 * @it: iteration digit.
 * @b_1: 1st number is integer.
 * @b_2: 2nd number is an integer.
 * @c: integer for options
 * Return: b_1 if c = 1 and b_2 if c = 2.
 */

void print_93(int b_1, int b_2, int it, int c)
{
	int tempo_1, tempo_2, a_1, a_2, b_2_1, b_2_2;

	a_1 = b_1;
	a_2 = b_2;
	b_1 = tempo_1 + a_1;
	b_2 = tempo_2 + a_2;

	printf(", %d%d", b_1, b_2);
	if (c == 1)
		return (b_1);
	if (c == 2)
		return (b_2);
}




}
else
{
	b_1 = tempo_1 + a_1;
	b_2 = tempo_2 + a_2;
	a_1 = b_1;
	a_2 = b_2;
	tempo_1 = a_1;
	tempo_2 = a_2;
	a_1 = b_1;
	a_2 = b_2;
	b_1 = tempo_1 + a_1;
	b_2 = tempo_2 + a_2;
	b_2_1 = b_2 % 10000000000;
	b_2_2 = b_1 + b_2 / 10000000000;

	printf(", %d%d", b_2_2, b_2_1);
}
}
}
