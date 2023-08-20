#include <stdio.h>
long int print_92(long int a, long int b, long int c);
long int p_93(long int a_1, long int a_2, long int b_1, long int b_2, int c);
void print_94_up_98(long int a_1, long int a_2, long int b_1, long int b_2);

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	long int a, b, tempo, it, m, n, l, p;

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
		else if (it == 92)
		{
			print_92(a, b, 7);
		}
		else if (it > 92)
		{
			if (it == 93)
			{
				m = print_92(a, b, 1);
				n = print_92(a, b, 2);
				l = print_92(a, b, 3);
				p = print_92(a, b, 4);
				p_93(m, n, l, p, 7);
			}
			else
			{
				m = p_93(m, n, l, p, 1);
				n = p_93(m, n, l, p, 2);
				l = p_93(m, n, l, p, 3);
				p = p_93(m, n, l, p, 4);
				print_94_up_98(m, n, l, p);
			}
		}
	}
	printf("\n");
	return (0);
}


/**
 * print_94_up_98 - print th fibonacci numbers from 94 to 98
 * i used same iteration number above to save time.
 * @a_1: 1st number is integer.
 * @a_2: 2nd number is an integer.
 * @b_1: 1st number is integer.
 * @b_2: 2nd number is an integer.
 * Return: None.
 */

void print_94_up_98(long int a_1, long int a_2, long int b_1, long int b_2)
{
	long int tempo_1, tempo_2, b_2_1, b_2_2;

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

/**
 * p_93 - print th fibonacci numbers N 93
 * i used same iteration number above to save time.
 * @a_1: 1st number is integer.
 * @a_2: 2nd number is an integer.
 * @b_1: 1st number is integer.
 * @b_2: 2nd number is an integer.
 * @c: integer for options
 * Return: a_1 if c = 1 and a_2 if c = 2. b_1 if c = 3 and b_2 if c = 4.
 */

long int p_93(long int a_1, long int a_2, long int b_1, long int b_2, int c)
{
	long int tempo_1, tempo_2;

	tempo_1 = a_1;
	tempo_2 = a_2;
	a_1 = b_1;
	a_2 = b_2;
	b_1 = tempo_1 + a_1;
	b_2 = tempo_2 + a_2;

	printf(", %ld%ld", b_1, b_2);
	if (c == 1)
		return (a_1);
	if (c == 2)
		return (a_2);
	if (c == 3)
		return (b_1);
	if (c == 4)
		return (b_2);
	return (0);
}

/**
 * print_92 - print the fibonacci numbers at N 92
 * i used same iteration number above to save time.
 * @a: 1st number is integer.
 * @b: 2nd number is an integer.
 * @c: integer for options
 * Return: b_1 if c = 1 and b_2 if c = 2.
 */

long int print_92(long int a, long int b, long int c)
{
	long int tempo_1, tempo_2, a_1, a_2, b_1, b_2;

	tempo_1 = (a / 10000000000);
	tempo_2 = (a % 10000000000);
	a_1 = (b / 10000000000);
	a_2 = (b % 10000000000);
	b_1 = tempo_1 + a_1;
	b_2 = tempo_2 + a_2;

	printf(", %ld%ld", b_1, b_2);
	if (c == 1)
		return (a_1);
	if (c == 2)
		return (a_2);
	if (c == 3)
		return (b_1);
	if (c == 4)
		return (b_2);
	return (0);

}
