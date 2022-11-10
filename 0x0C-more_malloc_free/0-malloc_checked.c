#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - check the code
 *@b: int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
