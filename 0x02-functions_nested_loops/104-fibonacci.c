#include <stdio.h>


long int print_92(long int a, long int b, long int c);
long int p_93(long int a_1, long int a_2, long int b_1, long int b_2, int c);
void pl(unsigned long a, unsigned long b, unsigned long c, unsigned long d);
long int p_93_1(long int a_1, long int a_2, long int b_1, long int b_2, int c);

/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	unsigned long int a, b, tempo, it, m, n, l, p;

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
		else if (it == 93)
		{
			m = print_92(a, b, 1);
			n = print_92(a, b, 2);
			l = print_92(a, b, 3);
			p = print_92(a, b, 4);
			p_93(m, n, l, p, 7);
		}
		else if (it == 94)
		{
			unsigned long i, j, k, o;

			i = p_93(m, n, l, p, 1);
			j = p_93(m, n, l, p, 2);
			k = p_93(m, n, l, p, 3);
			o = p_93(m, n, l, p, 4);

			pl(i, j, k, o);
		}
	}
	printf("\n");
	return (0);
}


/**
 * pl - print th fibonacci numbers from 94 to 98
 * i used same iteration number above to save time.
 * @a: 1st number is integer.
 * @b: 2nd number is an integer.
 * @c: 1st number is integer.
 * @d: 2nd number is an integer.
 * Return: None.
 */

void pl(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
	unsigned long int tempo_1, tempo_2, b_2_1, b_2_2;
	int y;

	for (y = 0; y < 5; y++)
	{
		tempo_1 = a;
		tempo_2 = b;
		a = c;
		b = d;
		c = tempo_1 + a;
		d = tempo_2 + b;
		b_2_1 = d % 10000000000;
		b_2_2 = c + d / 10000000000;

		printf(", %lu%lu", b_2_2, b_2_1);
	}
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

	if (c == 1)
		return (a_1);
	else if (c == 2)
		return (a_2);
	else if (c == 3)
		return (b_1);
	else if (c == 4)
		return (b_2);
	else if (c == 5)
		printf(", %ld%ld", b_1, b_2);
	return (0);
}
/**
 * p_93_1 - print th fibonacci numbers N 93
 * i used same iteration number above to save time.
 * @a_1: 1st number is integer.
 * @a_2: 2nd number is an integer.
 * @b_1: 1st number is integer.
 * @b_2: 2nd number is an integer.
 * @c: integer for options
 * Return: a_1 if c = 1 and a_2 if c = 2. b_1 if c = 3 and b_2 if c = 4.
 */

long int p_93_1(long int a_1, long int a_2, long int b_1, long int b_2, int c)
{
	long int tempo_1, tempo_2;

	tempo_1 = a_1;
	tempo_2 = a_2;
	a_1 = b_1;
	a_2 = b_2;
	b_1 = tempo_1 + a_1;
	b_2 = tempo_2 + a_2;

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

	if (c == 1)
		return (a_1);
	if (c == 2)
		return (a_2);
	if (c == 3)
		return (b_1);
	if (c == 4)
		return (b_2);
	else if (c == 5)
		printf(", %ld%ld", b_1, b_2);
	return (0);

}
