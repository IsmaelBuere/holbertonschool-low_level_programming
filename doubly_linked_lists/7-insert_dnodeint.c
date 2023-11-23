#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @h: head of the dlistint_t
 * @idx: the position to insert the new node.
 * @n: integer for the new node to contain.
 *
 * Return: (new_node)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *count = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		count = count->next;
		if (count == NULL)
			return (NULL);
	}

	if (count->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = count;
	new_node->next = count->next;
	count->next->prev = new_node;
	count->next = new_node;

	return (new_node);
}
