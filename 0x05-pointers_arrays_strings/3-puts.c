#include "main.h"
/**
 * _puts - check the code
 *
 * Return: Always 0.
 * @str: para1
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
