#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * err_exit - prints an error message and exits with a given code
 * @code: exit status code
 * @msg: format string for the error message
 * @file: filename to include in the message (NULL if not used)
 * @fd: file descriptor to include in the message (used if file is NULL)
 *
 * Description: Centralizes error handling for the cp program. It prints
 * the error message to STDERR, substitutes either a filename or a file
 * descriptor into the message, and exits with the provided status code.
 */
void err_exit(int code, const char *msg, const char *file, int fd)
{
	if (file)
		dprintf(STDERR_FILENO, msg, file);
	else
		dprintf(STDERR_FILENO, msg, fd);
	exit(code);
}

/**
 * main - copy content of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buffer[1024];

	if (argc != 3)
		err_exit(97, "Usage: cp file_from file_to\n", NULL, 0);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		err_exit(98, "Error: Can't read from file %s\n", argv[1], 0);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		err_exit(99, "Error: Can't write to %s\n", argv[2], 0);

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
			err_exit(99, "Error: Can't write to %s\n", argv[2], 0);
	}
	if (r == -1)
		err_exit(98, "Error: Can't read from file %s\n", argv[1], 0);

	if (close(fd_from) == -1)
		err_exit(100, "Error: Can't close fd %d\n", NULL, fd_from);
	if (close(fd_to) == -1)
		err_exit(100, "Error: Can't close fd %d\n", NULL, fd_to);

	return (0);
}
