#include "main.h"


/**
 * _strlen_recursion - give the length of a string
 * @s: pointer to string
 * Return: None
 */
int _strlen_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		return (1);
	}
	return ((((s + 1)) - (s)) + _strlen_recursion(s + 1));
}
