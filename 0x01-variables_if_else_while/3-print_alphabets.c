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
	char car;

	for (car = 'a'; car <= 'z'; car++)
	{
		putchar(car);
	}
	for (car = 'A'; car <= 'Z'; car++)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);
}
