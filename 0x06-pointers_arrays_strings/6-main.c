#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *ptr;
	char str[] = "expect the be\vst. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n ,a b	c ;d.e!f?g\"h(i)j{k}l";

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}

