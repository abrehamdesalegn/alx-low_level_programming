#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 *
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int a;

	a = 1;
	do {
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		a++;
	} while (a <= 10);
}
