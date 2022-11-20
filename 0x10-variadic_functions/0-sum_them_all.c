#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 int sum_them_all(const unsigned int n, ...)
 {
 	int sum, i;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
 }
