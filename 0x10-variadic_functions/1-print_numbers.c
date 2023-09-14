#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 || separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ls, int));
	}
	va_end(ls);
	printf("\n");
	exit(EXIT_SUCCESS);
}
