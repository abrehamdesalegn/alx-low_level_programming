#include <stdio.h>
#include "main.h"
/**
* print_to_98 - check the code.
*
* Return: Always 0.
*@c: para
*/
void print_to_98(int c)
{
	int i;

	if (c < 98)
	{
		for (i = c; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			printf(", ");
		}
	}
	if (c >= 98)
	{
		for (i = c; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			printf(", ");
		}
	}
}
