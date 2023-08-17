#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	a = INT_MAX;
	b = INT_MIN;
	c = 8989;

	largest = largest_number(a, b, c);

	printf("%d is the maximum number\n", a);
	printf("%d is the largest number\n", largest);

	return (0);
}
