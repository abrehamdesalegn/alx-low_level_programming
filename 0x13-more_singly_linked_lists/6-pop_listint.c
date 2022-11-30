#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: para
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int nn;

	if (*head == NULL)
		return (0);
	nn = (*head)->n;
	*head = (*head)->next;
	return (nn);
}
