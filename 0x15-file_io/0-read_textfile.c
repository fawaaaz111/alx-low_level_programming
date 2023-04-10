#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_l, write_l;
	int fd;
	char *buf = malloc(sizeof(char) * letters);

	if (!buf || !filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_l = read(fd, buf, letters);
	if (read_l == -1)
		return (0);

	write_l = write(STDOUT_FILENO, buf, read_l);
	if (write_l == -1)
		return (0);

	free(buf);
	close(fd);
	return (write_l);
}
