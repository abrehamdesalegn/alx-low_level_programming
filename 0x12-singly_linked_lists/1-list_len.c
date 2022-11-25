#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 * @h: para
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
