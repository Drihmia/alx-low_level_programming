#include <limits.h>
#include <stdio.h>
unsigned long int _atoi(char *s);

/**
 * _atoi - Converts a string to an unsigned long integer.
 * @s: The input string
 * Return: The unsigned long integer value.
 */
unsigned long int _atoi(char *s)
{
	int k = 0, i;
	unsigned long int l = 0;
	while (s[k] != '\0')
	{
		i = s[k] - '0';
		if (l <= ULONG_MAX / 10)
			l = l * 10 + i;
		else
			return (0);
		k++;
	}
	return (l);
}


int main(void)
{
	char s[10];
	int r = 1;
	unsigned long int l;

	while (r)
	{
		printf("Enter a string: ");
		scanf("%s", s);
		printf("the string is : %s\n", s);
		printf("tag 1\n");
		l = _atoi(s);
		printf("tag 2\n");
		printf("     in digit : %lu\n", l);
		printf("Enter an integer to continue (0 to exit): ");

		scanf("%d", &r);
	}
	return (0);
}
