#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
