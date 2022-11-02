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
		root(n, r + 1);
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
	else if (n < 0)
		return (-1);
 }
