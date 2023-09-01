#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: string
 * Return: None.
 */
void _puts(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts((s + 1));
}
