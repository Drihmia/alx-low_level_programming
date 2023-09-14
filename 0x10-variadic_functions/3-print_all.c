#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	unsigned int i = 0, j = 0;
	char *str, c;

	while (j < 1 && format == NULL)
	{
		exit(EXIT_FAILURE);
		j++;
	}
	va_start(ls, format);
	while (format[i] && format != NULL)
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
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ls);
}
