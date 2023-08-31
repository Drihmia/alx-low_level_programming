#include "main.h"
int _strlen_r(char *s);
int search_palindrom(char *st_l, char *st_r, int half);


/**
 * is_palindrome - check if a given string is palindrome or not.
 * @s: string to check.
 * Return: 1 is it is a palindrome and 0 if it is not.
 */
int is_palindrome(char *s)
{
	if (_strlen_r(s) < 2)
		return (1);
	return (search_palindrom(s, (s + _strlen_r(s) - 1), _strlen_r(s) / 2));
}

/**
 * search_palindrom - compare if two strings are the same.
 * @st_l: first string (left half).
 * @st_r: 2nd string (right half).
 * @half: integer a number (length of each string
 * Return: 1 if they identical or 0 if not.
 */

int search_palindrom(char *st_l, char *st_r, int half)
{
	if (_strlen_r(st_r) == half + 1)
		return (1);
	if (*st_l == *st_r)
		return (search_palindrom(st_l + 1, st_r - 1, half));
	else
		return (0);
}


/**
 * _strlen_r - give the length of a string(from previous tasks)
 * @str: pointer to string
 * Return: None
 */
int _strlen_r(char *str)
{
	if (*(str + 1) == '\0')
		return (1);
	else if (*str == '\0')
		return (0);
	return ((((str + 1)) - (str)) + _strlen_r(str + 1));
}
