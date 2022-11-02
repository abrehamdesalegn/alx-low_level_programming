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
	if (n % r == 0 && r < n)
	{
		return (0);
	}
	else if (r == n)
	{
		return (1);
	}
	else
		{
			r = root(n, r + 1);
			return (r);
		}
}
/**
 * is_prime_number - check the code
 *
 * Return: Always 0.
 *@n: para
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n >= 2)
		return (root(n, i));
	else
		return (0);
}
