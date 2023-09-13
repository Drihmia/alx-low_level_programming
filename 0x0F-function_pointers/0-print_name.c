#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @f: function pointer that take str.
 * @name: name to be printed.
 * Return: None.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
