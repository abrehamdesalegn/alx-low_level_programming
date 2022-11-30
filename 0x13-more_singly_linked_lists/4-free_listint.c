#include "lists.h"

/**
 * free_listint - check the code
 * @head: para
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		free(head);
		head = node->next;
	}
}
