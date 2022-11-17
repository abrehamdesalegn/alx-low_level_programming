#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array: name of the person
 *@action: cahr
 *@size: size
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while(size-- > 0)
	{
		action(*array);
		array++;
	}
}
