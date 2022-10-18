#include "main.h"
/**
* times_table - check the code.
*
* Return: Always 0.
*
*/
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			l = k % 10 + 48;
			m = k / 10 + 48;
			if (m > 48)
			{
				_putchar(m);
			}
			_putchar(l);
			if (m == 56 && l == 49)
			{
				break;
			}
			_putchar(',');
			_putchar('	');
		}
		_putchar('\n');
	}
}
