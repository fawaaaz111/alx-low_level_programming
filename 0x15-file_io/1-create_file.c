#include "main.h"

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int fd, l_write, length;

	fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	for (length = 0; text_content[length]; length++)
		;

	l_write = write(fd, text_content, length);
	if (l_write == -1)
		return (-1);

	return (1);
}
