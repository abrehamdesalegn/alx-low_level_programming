#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code
 * @h: para
 * Return: Always 0.
 */
 size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
