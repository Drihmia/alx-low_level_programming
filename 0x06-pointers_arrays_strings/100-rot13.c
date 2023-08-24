#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rot13 - encodes a string using rot13.
 * @c: pointer to char.
 * Return: char.
 */

char *rot13(char *c)
{
	int i, j;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char numbers[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (c[i] == letters[j])
			{
				c[i] = numbers[j];
				break;
			}
		}
	}
	return (c);
}

