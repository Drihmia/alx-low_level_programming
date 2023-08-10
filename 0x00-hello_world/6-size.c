#include <stdio.h>


/**
 * main - integer
 * Return: 0
 */
int main(void)
{
	/**
	 * @c: character
	 * @i: integer
	 * @u: long integer
	 * @lu: long long integer
	 * @f: float
	 */
	char c;
	int i;
	long int u;
	long long int lu;
	float f;

	/**
	 * printf - print
	 */
	printf("Size of a char: %lu byte(s)\n",sizeof(c));
	printf("Size of a int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(u));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lu));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
