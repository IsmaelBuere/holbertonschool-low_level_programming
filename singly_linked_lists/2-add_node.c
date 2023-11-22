#include "lists.h"
/**
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	char *n;
	int l;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	n = strdup(str);
	if (n == NULL);
	{
		free(new_node);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new_node->str = n;
	new_node->l = l;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
