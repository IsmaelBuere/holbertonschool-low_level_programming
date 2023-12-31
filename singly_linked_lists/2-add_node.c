#include "lists.h"
/**
 *add_node - Function that adds a new node at the beginning of a list_t list
 *@head: head of the linked list
 *@str: string
 *Return: (*head)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t c;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (c = 0; str[c];)
		c++;

	new_node->len = c;
	new_node->next = *head;
	*head = new_node;

		return (*head);
}
