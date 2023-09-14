#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: None.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			if (separator == NULL)
				printf("nil");
			else
				printf("%s", separator);
		}
		printf("%s", va_arg(ls, char *));
	}
	va_end(ls);
	printf("\n");
}
