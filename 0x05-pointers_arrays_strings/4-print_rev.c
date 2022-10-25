#include "main.h"
/**
 * print_rev - check the code
 *
 * Return: Always 0.
 * @s: para1
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
