#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - prints buffer in hexa
 * @ac: the size of the memory to print
 * @av: string
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int j, i;
	char *ar;

	ar = (char *) malloc(sizeof(char) * ac);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < ac; j++)
		{
			ar[j] = av[ac][j];
		}
		ar[i++] = '\n';
	}

	return (ar);
}
