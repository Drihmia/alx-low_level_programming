#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("-- s1  from main.c\n%s s1\n", s1);
	printf("-- prt from main.c\n%s ptr\n", ptr);
	return (0);
}

