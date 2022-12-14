#include "lists.h"

/**
 * add_node - check the code
 * @head: para
 * @str: para
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i, len;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	node->len = len;
	node->str = strdup(str);
	node->next = *head;
	*head = node;
	return (node);
}
