#include <stdio.h>

/**
 * main - Creates an array of chars and prints it
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[6];

	*a = 'S';
	*(a + 1) = 'c';
	*(a + 2) = 'h';
	a[3] = 'o';
	*(a + 4) = 'o';
	a[5] = 'l';
	printf("%c%c%c%c%c%c\n", a[0], a[1], a[2], a[3],
			a[4], a[5]);
	char b[20] = "redouane";
	printf("%s\n", b);
	printf("%c\n", b[0]);
	printf("%c\n", b[1]);
	printf("%c\n", b[2]);
	printf("%c\n", b[3]);
	printf("%c\n", b[4]);
	printf("%c\n", b[5]);
	printf("%c\n", b[6]);
	printf("%d\n", b[7]);
	printf("size of b : %lu \n", sizeof(b));
	printf("size of &b : %lu \n", sizeof(&b));
	return (0);
}
