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
	unsigned int i, len;

	i = 0;
	len = 0;
	if (str == NULL)
		return (NULL);
	while(str[i])
	{
		len++;
		i++;
	}
	ar = (char *) malloc(sizeof(char) * len);
	i = 0;
	while (i <= len)
	{
		ar[i] = str[i];
		i++;
	}
	return (ar);
}
