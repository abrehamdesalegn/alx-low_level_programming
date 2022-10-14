#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int car;
	char ca;

	for (car = 48; car <= 57; car++)
	{
		putchar(car);
	}
	for (ca = 'a'; ca <= 'f'; ca++)
	{
		putchar(ca);
	}
	putchar('\n');
	return (0);
}
