#include "main.h"

/**
 * create_file - creates a file
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it.
 * if text_content is NULL create an empty file.
 * if filename is NULL return -1.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fhandl = 0;
	ssize_t ret_close = 0, ret_write = 0;

	if (filename == NULL)
		return (-1);
	fhandl = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fhandl == -1)
		return (-1);

	ret_write = write(fhandl, text_content, strlen(text_content) + 1);

	if (ret_write == -1)
		return (-1);
	ret_close = close(fhandl);
	if (ret_close == -1)
		return (-1);
	return (1);
}
