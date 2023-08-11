#include <unistd.h>


/**
 * main - integer
 * Return: 1
 */
int main(void)
{
	/**
	 * @message: assigne the sentence provided
	 */
	 char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/**
	 * write - write the message directly to stderr
	 */
	write(STDERR_FILENO, str, sizeof(str) - 1);
	return (1);
}
