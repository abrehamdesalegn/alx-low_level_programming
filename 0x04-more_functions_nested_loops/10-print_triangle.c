#include "main.h"
/**
 * print_triangle - check the code.
 *
 * Return: Always 0.
 *@size: para
 */
void print_triangle(int size)
{
	if (size > 0)
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
	}
	else
		_putchar('\n');
}
