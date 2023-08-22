#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
	*cc = 'o';
	ccc = 'l';
	printf("the value of pinter *cc is : %p\nand the variable ccc '%c'\n", cc, ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf(" the value of c before is : %d ('%c')\n", c, c);
	modif_my_char_var(p, c);
	printf(" the value of c after is : %d ('%c')\n", c, c);
	printf("the value of pinter *p is : %p\n", p);
	return (0);
}
