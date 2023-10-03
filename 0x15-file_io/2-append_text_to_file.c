#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Do not create the file if it does not exist.
 *
 * Return: 1 on success and -1 on failure.
 * If filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fhandl = 0;
	ssize_t ret_close = 0, ret_write = 0;

	if (filename == NULL)
		return (-1);

	fhandl = open(filename, O_WRONLY | O_APPEND);
	if (fhandl == -1)
		return (-1);

	if (text_content)
	{
		ret_write = write(fhandl, text_content, strlen(text_content));
		if (ret_write == -1)
			return (-1);
	}

	ret_close = close(fhandl);
	if (ret_close == -1)
		return (-1);
	return (1);
}
