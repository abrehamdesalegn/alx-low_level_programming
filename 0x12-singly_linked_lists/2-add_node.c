#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = (list_t *)malloc(sizeof(list_t));
	node->str = strdup(str);
	node->next = *head;
	*head = node;
	return (node);
}
