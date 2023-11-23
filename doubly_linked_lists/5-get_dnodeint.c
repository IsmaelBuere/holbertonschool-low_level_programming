#include "lists.h"
/**
 * get_dnodeint_at_index - locates a node in a dlistint_t
 * @head: head of the dlistint_t
 * @index: The node to locate.
 *
 * Return: (NULL)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *count = head;

	while (count != NULL && c < index)
	{
		count = count->next;
		c++;
	}

	if (c == index && count != NULL)
	{
		return (count);
	}
	else
	{
		return (NULL);
	}
}
