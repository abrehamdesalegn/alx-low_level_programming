#include "main.h"
/**
 * _isupper - check the code.
 *
 * Return: Always 0.
 * @C: para
 */
 int _isupper(int c)
{
	int m;
	
	if (c >= 65 && c <= 90)
	{
		m = 1;
	}
	else
	{
		m = 0;
	}
	return (m);
}
