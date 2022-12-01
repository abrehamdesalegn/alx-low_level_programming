#include <stdio.h>
#include "main.h"

/**
 * po - check the code
 * @k: para
 * Return: Always 0.
 */
unsigned int po(int k)
{
	if (k == 0)
		return (1);
	else if (k == 1)
		return (2);
	else
		return (2 * po(k - 1));
}
/**
 * binary_to_uint - check the code
 * @b: para
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, l, j;
	int k;

	if (b == NULL)
		return (NULL);
	k = 0;
	i = 0;
	l = 0;
	while (b[k])
	{
		k++;
	}
	k--;
	j = k;
	while (k >= 0)
	{
		i = b[k] - 48;
		if (i == 0)
		{
			k--;
			continue;
		}
		else if (i == 1)
		{
			l += po(j - k);
		}
		else
		{
			return NULL;
		}
		k--;
	}
	return (l);
}
