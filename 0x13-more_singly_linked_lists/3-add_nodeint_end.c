#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: para
 * @n: para
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
	}
	return (*head);
}
