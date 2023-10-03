#include "main.h"

/**
 * main - take two aeguments, and copy 1st into the 2nd one.
 * @ac: counts parameter passed to the program.
 * @ag: arguments.
 * Return: 0 if succeeded.
 */

int main(int ac, char **ag)
{
	int fd_to = 0, fhandls_fr = 0;
	char buf[1024];
	ssize_t ret_read = 0, ret_write = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fhandls_fr = open(ag[1], O_RDONLY);
	if (fhandls_fr == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", ag[1]), exit(98);
	fd_to = open(ag[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", ag[2]), exit(99);
		if (close(fhandls_fr) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100); }
	while ((ret_read = read(fhandls_fr, buf, sizeof(buf))) > 0)
	{
		ret_write = write(fd_to, buf, ret_read);
		if (ret_write == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", ag[2]), exit(99);
			if (close(fhandls_fr) == -1)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
			if (close(fd_to) == -1)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
		}
	}
	if (ret_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ag[1]), exit(98);

	if (close(fhandls_fr) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fhandls_fr), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
