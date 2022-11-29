#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code
 * @h: para
 * Return: Always 0.
 */
 size_t print_listint(const listint_t *h)
 {
 	size_t n;

	n = 0;
	while (h)
	{
		printf("[%d]\n", h->n);

		n++;
		h = h->next;
	}
	return (n);
 }
