#include "lists.h"
/**
 *add_node_end - function that adds a new node at the end of a list_t list.
 *@head: head of the linked list
 *@str: string
 *Return: (*head)
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

	if (count == NULL)
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
