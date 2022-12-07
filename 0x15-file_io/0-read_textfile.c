#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - check the code
 * @filename: para
 * @letters: para
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buf, letters);
	wr = write(STDERR_FILENO, buf, rd);

	if (wr == -1 || rd == -1 || fd == -1 || wr != rd)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (wr);
}
