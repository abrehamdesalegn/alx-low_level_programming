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
	unsigned int i;

	i = 0;
	if (str == NULL)
		return (NULL);
	ar = (char *) malloc(sizeof(char));
	while (i < sizeof(str))
	{
		ar[i] = str[i];
		i++;
	}
	return (ar);
}
