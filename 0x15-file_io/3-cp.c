#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */


int main(int argc, char *argv[])
{
	int fd_r, fd_w, read_b;
	size_t len = 1024;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/*try to read 'file_from'*/
	fd_r = open(argv[1], O_RDONLY);
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((read_b = read(fd_r, buf, len)) > 0)
		write(fd_w, buf, len); 


	if (!close(fd_r));
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		exit(100);
	}

	if (!close(fd_w))
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
