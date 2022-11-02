#include "main.h"

/**
 * _puts_recursion - check the code
 *
 * Return: Always 0.
 *@s: para
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
