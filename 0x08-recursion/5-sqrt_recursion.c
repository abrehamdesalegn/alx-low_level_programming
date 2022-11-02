#include "main.h"

/**
 * root - check the code
 *
 * Return: Always 0.
 *@n: para
 *@r: para
 */
int root(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r < n)
	{
		r = root(n, r + 1);
		return (r);
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - check the code
 *
 * Return: Always 0.
 *@n: para
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n >= 0)
		return (root(n, i));
	else
		return (-1);
}
