#include "main.h"
/**
 * more_numbers- check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int c, n, m;

	for (m = 1; m <= 10; m++)
	{
		for (n = 0; n < 2; n++)
		{
			for (c = 48; c < 58; c++)
			{
				if (n == 1)
				{
					if (c == 53)
					{
						break;
					}
					_putchar(49);
				}
				_putchar(c);
			}
		}
		_putchar('\n');
	}
}
