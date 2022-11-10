#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * array_range - check the code for ALX School students.
 *@min: int
 *@max: int
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	i = 0;
	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i <= (max - min))
	{
		s[i] = min + i;
		i++;
	}
	return (s);
}
