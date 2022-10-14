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

	for (car = 'z'; car >= 'a'; car--)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);
}
