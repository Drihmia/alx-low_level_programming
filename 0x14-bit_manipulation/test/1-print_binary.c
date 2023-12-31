#include "main.h"


/**
 * print_binary - prints the binary representation of a number.
 * @n: the number entred as input
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	print_binary(n >> 1);
	n = n & 1;	
	_putchar(n);
}


