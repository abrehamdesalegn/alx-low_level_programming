#include "main.h"

/**
 * factorial - check the code
 *
 * Return: Always 0.
 *@n: para
 */
int factorial(int n)
{
	if (n > 1)
	{
		n *= factorial(n - 1);
		return (n);
	}
	else if (n == 0 || n == 1)
		return (1);
	else
		return (-1);
}
