#include "lists.h"
/**
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	list_t *new_node = malloc(sizeof(list_t));

	if(new_node == NULL)
	{
		return (NULL);
	}

	new_node->data = strdup(str);

	if (new_node->data == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = (*head);

	(*head) = new_node;

	return (*head);
}
