#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: para
 * @n: para
 * @idx: para
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prenode, *nextnode, *newnode;
	unsigned int i;

	prenode = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		for (i = 1; i < idx; i++)
		{
			prenode = prenode->next;
		}
		if (prenode == NULL)
			return (NULL);
		nextnode = prenode->next;
		prenode->next = newnode;
		newnode->next = nextnode;	
	}
	return (newnode);
}
