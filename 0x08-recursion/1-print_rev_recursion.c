#include <string.h>
#include "main.h"


/**
 * _print_rev_recursion -  prints a string in reverse, followed by a new line.
 * @s: pointer to string
 * Return: None
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion((s + 1));
	_putchar(*s);
}
