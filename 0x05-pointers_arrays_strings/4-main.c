#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	str = "Holberton!";
	print_rev(str);
	str = "Lorem ipsum...";
	print_rev(str);
	str = "";
	print_rev(str);
	return (0);
}
