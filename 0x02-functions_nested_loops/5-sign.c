#include "main.h"
/**
* print_sign - check the code.
*
* Return: Always 0.
* @c: input par
*/
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		c = 1;
	}
	else if (c < 0)
	{
		_putchar(45);
		c = -1;
	}
	else if (c == 0)
	{
		_putchar(48);
		c = 0;
	}
	return (c);
}
