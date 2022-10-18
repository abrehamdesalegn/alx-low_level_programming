#include "main.h"
/**
* times_table - check the code.
*
* Return: Always 0.
*
*/
void times_table(void)
{
	int i, j, n, k, l, m;

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
			n = m + l;
			if (j == 9)
			{
				break;
			}
			_putchar(',');
			if (m > 0)
			{
				_putchar(' ');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
