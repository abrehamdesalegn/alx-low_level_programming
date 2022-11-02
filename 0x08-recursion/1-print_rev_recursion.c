#include "main.h"

/**
 * _print_rev_recursion - check the code
 *
 * Return: Always 0.
 *@s: para
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
