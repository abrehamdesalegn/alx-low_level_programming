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
	ssize_t fd;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	read(fd, buf, letters);
	printf("%s\n", buf);
	close(fd);
	return (letters + 10);
}
