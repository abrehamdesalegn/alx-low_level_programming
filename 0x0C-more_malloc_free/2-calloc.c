#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - check the code for ALX School students.
 *@nmemb: int
 *@size: int
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
