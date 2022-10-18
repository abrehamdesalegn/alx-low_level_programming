#include "main.h"
/**
* jack_bauer - check the code.
*
* Return: Always 0.
*
*/
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 51; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; k++)
				{
					putchar(i);
					putchar(j);
					putchar(':');
					putchar(k);
					putchar(l);
					putchar('\n');
				}
			}
		}
	}
}
