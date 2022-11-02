#include "main.h"

/**
 * _pow_recursion - check the code
 *
 * Return: Always 0.
 *@x: para
 *@y: para
 */
int _pow_recursion(int x, int y)
{
	if (y > 1)
	{
		x *= _pow_recursion(x, y - 1);
		return (x);
	}
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return(-1);
}
