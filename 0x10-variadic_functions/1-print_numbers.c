#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: arg
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(ptr, unsigned int);
		_putchar(sum);
		if (i != n - 1)
		{
			if (separator != NULL)
			{
				_putchar(separator);
			}
		}
	}
	_putchar("\n");
	va_end(ptr);
}
