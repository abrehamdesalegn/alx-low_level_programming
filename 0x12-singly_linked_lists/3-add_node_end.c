#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 * @head: para
 * @str: para
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *lastnode;
	int i, len;

	if (head == NULL)
		return (NULL);

	node = (list_t*)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;

	node->len = len;
	node->str = strdup(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = node;
	}
	return (node);
}
