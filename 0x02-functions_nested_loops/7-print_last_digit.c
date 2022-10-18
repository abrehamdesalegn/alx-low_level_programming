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
	ld += 48;
	putchar(ld);
	return (ld - 48);
}
