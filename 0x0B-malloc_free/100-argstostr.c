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
	int j;
	char *ar;

	ar = (char *) malloc(sizeof(char) * ac);
	
	for (j = 0; j < ac; j++)
	{
		ar[j] = *av[j];
		j++;
		ar[j] = '\n';
	}
	return (ar);
}
