#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int fd_read, fd_write, rcont, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from this file%s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rcont = read(fd_read, buf, BUFSIZ)) > 0)
	{
		if (fd_write < 0 || write(fd_write, buf, rcont) != rcont)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to this file %s\n", argv[2]);
			close(fd_read);
			exit(99);
		}
	}
	if (rcont < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from this file %s\n", argv[1]);
		exit(98);
	}
	m = close(fd_read);
	n = close(fd_write);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't write fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}
