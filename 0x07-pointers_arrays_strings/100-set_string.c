#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to pointer to char.
 * @to: pointer to char
 * Retur: None
 */
void set_string(char **s, char *to)
{
	*s = to;
}
