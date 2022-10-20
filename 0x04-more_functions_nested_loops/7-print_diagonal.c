#include "main.h"
/**
 * print_diagonal - check the code.
 *
 * Return: Always 0.
 * @n: para
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int c, i;

		for (c = 0; c < n; c++)
		{
			for (i = 1; i <= c; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n'};
}
