#include "lists.h"
/**
 *add_dnodeint_end - function that adds a new node at
 *the end of a dlistint_t list.
 *@head: head of the dlistint_t
 *@n: integer for the new node
 *Return: (new_node)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *count = *head;

		while (count->next != NULL)
		{
			count = count->next;
		}

		count->next = new_node;
		new_node->prev = count;
	}

	return (new_node);
}
