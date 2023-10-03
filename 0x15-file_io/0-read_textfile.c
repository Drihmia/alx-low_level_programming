#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std  output.
 * @filename: is the name of the file to read from.
 * @letters: is the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print
 * if filename is NULL return 0.
 * if the file can not be opened or read, return 0,
 * if write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fhandl = 0;
	ssize_t ret_read = 0, ret_close = 0, ret_write = 0;
	char buf[10000];

	if (filename == NULL)
		return (0);

	fhandl = open(filename, O_RDONLY);
	if (fhandl == -1)
		return (0);

	if (letters)
	{
		ret_read = read(fhandl, buf, letters);
		if (ret_read == -1)
		{
			close(fhandl);
			return (0);
		}
		buf[ret_read] = '\0';

		ret_write = write(STDOUT_FILENO, buf, strlen(buf));
		if (ret_write == -1)
		{
			close(fhandl);
			return (0);
		}

	}
	ret_close = close(fhandl);
	if (ret_close == -1)
		return (0);
	return (ret_read);

}
