#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - variadic function that print anything.
 * @format: pointer to char "string".
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list ls;
	unsigned int i = 0;
	char *str, c;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(ls, format);
	while (format[i])
	{
		c = format[i];
		if (i != 0 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ls, int));
				break;
			case 'i':
				printf("%d", va_arg(ls, int));
				break;
			case 'f':
				printf("%f", va_arg(ls, double));
				break;
			case 's':
				str = va_arg(ls, char *);
				printf("%s", (str ? str : "(nil)"));
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ls);
}
