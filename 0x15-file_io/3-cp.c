#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	srcfile = argv[1];
	destfile = argv[2];
	op = open(srcfile, O_RDONLY);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destfile);
		exit(99);
	}
	rd = read(op, buf, 1024);
	if (op == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", srcfile);
		exit(98);
	}
	cs = close(op);
	if (cs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op);
		exit(100);
	}
	op = open(destfile, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr = write(op, buf, 1024);
	if (wr == -1 || op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destfile);
		exit(99);
	}
	cs = close(op);
	if (cs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op);
		exit(100);
	}
	free(buf);
	return (0);
}
