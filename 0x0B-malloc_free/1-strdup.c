#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - prints buffer in hexa
 * @str: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i, size;

	i = 0;
	size = sizeof(str) - 2;
	if (str == NULL)
		return (NULL);
	ar = (char *) malloc(sizeof(str));
	while (i < size)
	{
		ar[i] = str[i];
		i++;
	}
	return (ar);
}
