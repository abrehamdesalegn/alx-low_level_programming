#include "main.h"
/**
 * swap_int - check the code
 *
 * Return: Always 0.
 * @a: para1
 * @b: para2
 */
void swap_int(int *a, int *b)
{
	int sw;
	
	sw = *a;
	*a = *b;
	*b = sw;
}
