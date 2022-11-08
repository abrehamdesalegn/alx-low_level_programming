#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - prints buffer in hexa
 * @grid: the size of the memory to print
 *@height: string
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
	free(grid);
}
