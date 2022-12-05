#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - check the code
 * @filename: para
 * @text_content: para
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	wr = write(file, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(file);
	return (1);
}
	
