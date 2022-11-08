#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - prints buffer in hexa
 * @width: the size of the memory to print
 *@height: string
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	ar = (int **) malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	for (j = 0; j < width; j++)
		{
			ar[j] = (int *) malloc(sizeof(int) * width);
			if (ar[j] == NULL)
				return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
