#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 * @argc: para
 * @argv: para
 * Return: Always 0.
 */
int main(int argc, const char *argv[])
{
	int op, rd, wr, cs;
	const char *srcfile, *destfile;
	char *buf;

	if (argc != 3)
	{
		dprintf(1, "Usage: cp file_from file_to\n");
		exit(97);
	}
	srcfile = argv[1];
	destfile = argv[2];

	op = open(srcfile, O_RDONLY);
	if (op == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", srcfile);
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024 + 1);
	if (buf == NULL)
		return (0);
	rd = read(op, buf, 1024);
	if (rd == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", srcfile);
		exit(98);
	}
	cs = close(op);
	if (cs == -1)
	{
		dprintf(1, "Error: Can't close fd %d\n", cs);
		exit(100);
	}
	op = open(destfile, O_CREAT | O_WRONLY, 0664);
	if (op == -1)
	{
		dprintf(1, "Error: Can't write to %s\n", destfile);
		exit(99);
	}
	wr = write(op, buf, 1024);
	if (wr == -1)
	{
		dprintf(1, "Error: Can't write to %s\n", destfile);
		exit(99);
	}
	cs = close(op);
	if (cs == -1)
	{
		dprintf(1, "Error: Can't close fd %d\n", cs);
		exit(100);
	}
	return (0);
}
