#include <limits.h>
#include <stdio.h>
unsigned long int _atoi(char *s);

/**
 * _atoi - Converts a string to an unsigned long integer.
 * @s: The input string
 * Return: The unsigned long long integer value.
 */
unsigned long int _atoi(char *s)
{
	int k = 0, i;
	unsigned long int l = 0;

	while (s[k] != '\0')
	{
		i = s[k] - '0';
		//if (l <= ULONG_MAX)
		l = l * 10 + i;
			//return (0);
		k++;
	}
	return (l);
}


int main(void)
{
	char s[10] = "123456789";
	unsigned long int l;
	
	l = _atoi(s);

	printf("%lu\n", l);

	return (0);
}
