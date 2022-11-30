#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: para
 * @index: para
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp1, *tmp2;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		*head = (*head)->next;
	else
	{
		tmp = *head;
		for (i = 1; i < index; i++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (-1);
		tmp1 = tmp->next;
		tmp2 = tmp1->next;
		tmp->next = tmp2;
		free(tmp1);
	}
	return (1);
}
