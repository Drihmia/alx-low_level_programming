#include "main.h"

/**
 * rev_string -  reverse string to stdout.
 * @s: string
 * Return: None.
 */
void rev_string(char *s)
{
	/* pointers start and end are both have the address of 1st element*/
	char *start = s;
	char *end = s;
	char intr;

	/* moving the point end to the end of string in the memory */
	while (*end != '\0')
		end++;
	/**
	 * the very end of pointer end is a null char.
	 * so we shift it back with one position
	 */
	end--;

	/* reversing proccess */
	while (start < end)
	{
		intr = *start;
		*start = *end;
		*end = intr;
		start++;
		end--;
	}
}
