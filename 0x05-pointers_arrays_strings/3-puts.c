#include "main.h"
/**
 * _puts - check the code
 *
 * Return: Always 0.
 * @str: para1
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(str);
	str++;
	}
}
