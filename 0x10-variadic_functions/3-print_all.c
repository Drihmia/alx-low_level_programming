#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - variadic function that print anything.
 * @format: pointer to char "string".
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list ls;
	int i = 0, is_there;
	char *str;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(ls, format);
	while (format[i])
	{
		is_there = 1;
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
			default:
				is_there = 0;
				break;
		}
		if(i < (int)(strlen(format) - 1) && is_there == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ls);
}
