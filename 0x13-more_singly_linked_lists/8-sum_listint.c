#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code
 * @head: para
 *
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while(head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
