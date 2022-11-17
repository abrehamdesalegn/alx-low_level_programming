#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array: name of the person
 *@cmp: cahr
 *@size: size
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if ( size <= 0)
		return (-1);
	i = size;
	j = 0;
	while (size-- > 0)
	{
		j = cmp(*array);
		if (j != 0)
			return (i - size - 1);
		array++;
	}
	
	return (-1);
}
