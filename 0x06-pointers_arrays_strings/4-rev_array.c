#include "main.h"
/**
 * reverse_array - check the code
 *
 * Return: Always 0.
 *@n: para1
 *@a: para2
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
