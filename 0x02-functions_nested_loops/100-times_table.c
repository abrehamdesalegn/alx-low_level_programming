#include "main.h"
/**
* print_times_table - check the code.
*
* Return: Always 0.
*@n: para
*/
void print_times_table(int n)
{
	int i, j, k, l, m, a, b;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				l = k % 10 + 48;
				m = k / 10;
				b = k / 100 + 48;
				if (b > 48)
				{
					_putchar(b);
				}
				if (m > 9)
				{
					a = m % 10 + 48;
					_putchar(a);
				}
				if (m > 0 && m <= 9)
				{
					_putchar(m + 48);
				}
				_putchar(l);
				if (j == n)
				{
					break;
				}
				_putchar(',');
				if ((i * (j + 1)) / 10 + 48 < 49)
				{
					_putchar(' ');
				}
				if ((i * (j + 1)) / 100 + 48 < 49)
				{
					_putchar(' ');
				}
				_putchar(' ');
			}
			_putchar(' ');
		}
	}
}
