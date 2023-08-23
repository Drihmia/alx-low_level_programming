#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("---  s1  ---%s\n", s1);
	printf("---  s2  ---%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("---  s1  ---%s\n", s1);
	printf("---  s2  ---%s", s2);
	printf("--- ptr  ---%s\n", ptr);
	ptr = _strncat(s1, s2, 2);
	printf("---  s1  ---%s\n", s1);
	printf("---  s2  ---%s", s2);
	printf("--- ptr  ---%s\n", ptr);
	ptr = _strncat(s1, s2, 4);
	printf("---  s1  ---%s\n", s1);
	printf("---  s2  ---%s", s2);
	printf("--- ptr  ---%s\n", ptr);
	ptr = _strncat(s1, s2, 6);
	printf("---  s1  ---%s\n", s1);
	printf("---  s2  ---%s", s2);
	printf("--- ptr  ---%s\n", ptr);
	ptr = _strncat(s1, s2, 7);
	printf("---  s1  ---%s\n", s1);
	printf("---  s2  ---%s", s2);
	printf("--- ptr  ---%s\n", ptr);
	return (0);
}
