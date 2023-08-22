#include <stdio.h>

/**
 * main - Prints the value of a string
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[7] = "School";
	char *b, *c;

	printf("%s\n", a);
	printf("Value of the last char of a: %d\n", a[6]);
	printf("Value of a: %p\n", a);
	printf("Value of \"School\": %p\n", "School");
	printf("Value of \"lol\": %p\n", "lol\n");
	b="lol\n";
	c = b;
	printf("Value of c pointer \"lol\": %p\n", c);
	while(*b != '\0')
		printf(" letter os lol in b is %c\n",*b++);
	printf("Value of a pointer \"lol\": %p\n", c);
	printf("Value of a pointer \"lol\": %d\n", *c);

	return (0);

}

