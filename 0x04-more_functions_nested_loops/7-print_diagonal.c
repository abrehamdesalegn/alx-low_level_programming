#include "main.h"
/**
 * print_diagonal - check the code.
 *
 * Return: Always 0.
 * @n: para
 */
void print_diagonal(int n)
{
	int c, i;

	for (c = 0; c < n; c++)
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 0; i <= c; i++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
