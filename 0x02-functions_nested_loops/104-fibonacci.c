#include <stdio.h>
void if_local(int it, long int a, long int b);

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	long int a, b, tempo, it;

	a = 1;
	b = 2;
	it = 2;

	printf("%ld, %ld", a, b);
	while (it < 98)
	{
		it += 1;
		if (it <= 91)
		{
			tempo = a;
			a = b;
			b = tempo + a;
			printf(", %ld", b);
		}
		else
		{
			if_local(it, a, b);
		}
	}
	printf("\n");
	return (0);
}

/**
 * if_local - IFs to hundle different cases from 92 up to 98 Fibonacci numbers.
 * i used same iteration number above to save time.
 * @it: iteration digit.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: None
 */
void if_local(int it, long int a, long int b)
{
	int tempo_1, tempo_2, a_1, a_2, b_1, b_2, b_2_1, b_2_2;

	if (it == 92)
	{
		tempo_1 = (a / 10000000000);
		tempo_2 = (a % 10000000000);
		a_1 = (b / 10000000000);
		a_2 = (b % 10000000000);
		b_1 = tempo_1 + a_1;
		b_2 = tempo_2 + a_2;
		printf(", %ld%ld", b_1, b_2);
	}
	else if (it > 92 && it < 94)
	{
		tempo_1 = a_1;
		tempo_2 = a_2;
		a_1 = b_1;
		a_2 = b_2;
		b_1 = tempo_1 + a_1;
		b_2 = tempo_2 + a_2;
		printf(", %ld%ld", b_1, b_2);
	}
	else
	{
		tempo_1 = a_1;
		tempo_2 = a_2;
		a_1 = b_1;
		a_2 = b_2;
		b_1 = tempo_1 + a_1;
		b_2 = tempo_2 + a_2;
		b_2_1 = b_2 % 10000000000;
		b_2_2 = b_1 + b_2 / 10000000000;
		printf(", %ld%ld", b_2_2, b_2_1);
	}
}
