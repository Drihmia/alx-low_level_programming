#include "main.h"
int _strlen_recursion(char *s);
int search_palindrom(char *st_l, char *st_r, int half);


/**
 * is_palindrome - check if a given string is palindrome or not.
 * @s: string to check.
 * Return: 1 is it is a palindrome and 0 if it is not.
 */
int is_palindrome(char *s)
{
	if (_strlen_recursion(s) < 2)
		return (1);
	//if (_strlen_recursion(s) % 2 != 0)
	return (search_palindrom(s, (s + _strlen_recursion(s) - 1),_strlen_recursion(s) / 2 ));
}


int search_palindrom(char *st_l, char *st_r, int half)
{
	if (_strlen_recursion(st_l) == half + 1)
		return (1);
	if (*st_l == *st_r)
		return (search_palindrom(st_l + 1, st_r - 1, half));
	else
		return (0);
}


/**
 * _strlen_recursion - give the length of a string(from previous tasks)
 * @str: pointer to string
 * Return: None
 */
int _strlen_recursion(char *str)
{
	if (*(str + 1) == '\0')
		return (1);
	else if (*str == '\0')
		return (0);
	return ((((str + 1)) - (str)) + _strlen_recursion(str + 1));
}
