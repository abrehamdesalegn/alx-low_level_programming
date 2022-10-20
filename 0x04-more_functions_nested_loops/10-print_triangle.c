#include "main.h"
/**
 * print_triangle - check the code.
 *
 * Return: Always 0.
 *@size: para
 */
void print_triangle(int size)
{
	int c, i, j;

	for (c = 1; c <= size; c++)
	{
		for (j = 1; j <= size - c; j++)
		{
			_putchar(' ');
		}
		for (i = 1; i <= c; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
