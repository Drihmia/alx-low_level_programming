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
	char *str;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		str = va_arg(ls, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	va_end(ls);
	printf("\n");
}
