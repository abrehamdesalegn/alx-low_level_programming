#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 * @head: para
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int nn;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	nn = (*head)->n;
	*head = tmp->next;
	free(tmp);
	return (nn);
}
