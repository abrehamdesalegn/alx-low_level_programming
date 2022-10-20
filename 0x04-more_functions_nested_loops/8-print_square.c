#include "main.h"
/**
 * print_square - check the code.
 * @size: para
 * Return: Always 0.
 */
void print_square(int size)
{
	int c, i;

	for (c = 1; c <= size; c++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
