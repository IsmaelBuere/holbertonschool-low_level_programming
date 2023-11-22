#include "lists.h"
/**
 *
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *count;
	size_t c;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	for (c = 0; str[c];)
		c++;

	new_node->next = NULL;
	new_node->len = c;
	count = *head;

	if (count == new_node)
	{
		*head = new_node;
	}
	else
	{
		while (count->next != NULL)
		{
			count = count->next;
		}
		count->next = new_node;
	}

	return (*head);
}
