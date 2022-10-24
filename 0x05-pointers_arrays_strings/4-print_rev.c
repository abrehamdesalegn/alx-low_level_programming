#include "main.h"
/**
 * print_rev - check the code
 *
 * Return: Always 0.
 * @s: para1
 */
void print_rev(char *s)
{
	int cout;

	cout = 0;
	while (*s != '\0')
	{
		cout++;
		s++;
	}
	while (cout >= 0)
	{
		--s;
		_putchar(*s);
		cout--;
	}
	_putchar('\n');
}
