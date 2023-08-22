#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[6];

	a[0] = 98;
	a[1] = 198;
	a[2] = 298;
	a[3] = 398;
	a[4] = 498;
	printf("Value of a[0]: %d\n", a[0]);
	printf("Value of a[0]: %d\n", *(a + 0));
	printf("Value of a[1]: %d\n", a[1]);
	printf("Value of a[1]: %d\n", *(a + 1));
	printf("Value of a[2]: %d\n", a[2]);
	printf("Value of a[3]: %d\n", a[3]);
	printf("Value of a[4]: %d\n", a[4]);
	printf("Address of 'a[0]': %p\n", &(a[0]));
	printf("Address of 'a': %p\n", a);
	printf("Address of 'a[1]': %p\n", &(a[1]));
	printf("Address of 'a[2]': %p\n", &(a[2]));
	printf("Address of 'a[3]': %p\n", &(a[3]));
	printf("Address of 'a[4]': %p\n", &(a[4]));

	printf("Loop aproach\n");

	int i, *p;
	
	p = a;
	for (i = 0; i < 5; i++)
	{
		printf("the value of a element by element is : %d\n\n", *(p + i));
	}

	printf("Address of '&a': %p\n", &a);
	printf("Address of 'a': %p\n", a);

	int *c;

	c = a;

	for (i = 0; i < 5; i++)
	{
		//printf("Value of 'p': %d\n\n", *(c + i));
		//c++;
	}

	printf(" the size of a is %lu\n", sizeof(a));
	printf(" the size of &a is %lu\n", sizeof(&a));
	printf(" the size of &a[0] is %lu\n", sizeof(&a[0]));

	int *pp;

	pp = NULL;

	printf("the value of null pointer is %p\n", pp);
	return (0);
}
