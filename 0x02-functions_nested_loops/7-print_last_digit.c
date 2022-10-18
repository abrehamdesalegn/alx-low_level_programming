#include "main.h"
/**
* print_last_digit - check the code.
*
* Return: Always 0.
* @c: input par
*/
int print_last_digit(int c)
{
	int ld;

	ld = c % 10;
	if (ld < 0)
	{
		ld *= -1
	}
	ld += 48;
	_putchar(ld);
	return (ld - 48);
}
