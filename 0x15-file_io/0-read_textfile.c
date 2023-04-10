#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_l;
	char buf[letters];

	if (!filename)
		return (0);

	int fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);

	read_l = read(fd, buf, letters);
	if (read_l == -1)
		return (0);

	ssize_t write_l = write(STDOUT_FILENO, buf, read_l);
	if (write_l == -1)
		return (0);

	close(fd);
	return (write_l);
}
