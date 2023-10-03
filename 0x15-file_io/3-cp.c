#include "main.h"

/**
 * create_buffer - Allocates 1024 byte for a buffer.
 * @file: The mname of the file buffer is storing chars for.
 * Return: A pointer to the newly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(size0f(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - close file descriptor.
 @fd: file descriptor to closed.
 */
void close_file(int fd);
{
	int c;
	if (c == -1)
	{
		dprintf(STDERR, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents from a file to another.
 * @argc: the number of arguments supplied to the programme.
 * @argv: array of pointer to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR, "usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY |O_TRUNC, 0664);

	do {
		if ((from == -1) || (r == -1))
		{
			dprintf(STDERR, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		
		if ((to == -1) || (w == -1))
		{
			dprintf(STDERR, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024)
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}