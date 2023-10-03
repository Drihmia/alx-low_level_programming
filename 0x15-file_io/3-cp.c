#include "main.h"

/**
 * main - take two aeguments, and copy 1st into the 2nd one.
 * @ac: counts parameter passed to the program.
 * @ag: arguments.
 * Return: 0 if succeeded.
 */

int main(int ac, char **ag)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s %s %s\n", ag[0], ag[1], ag[2]);
		exit(97);
	}
}
