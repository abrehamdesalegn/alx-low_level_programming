#include "main.h"
/**
 * _isdigit - check the code.
 *
 * Return: Always 0.
 * @c: para
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
