#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: para
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	head = NULL;
}
