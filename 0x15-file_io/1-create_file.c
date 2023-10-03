#include "main.h"

/**
 * create_file - create a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on sucess, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd; _write;
	len;

	if (filename == NULL)
		return (-1);

	if (filename != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);

	_write(fd, text_content, len);

	if (fd == -1 || _write == -1)
		return (-1);

	close(fd);
	return(1);
}