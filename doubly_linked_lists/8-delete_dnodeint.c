#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes the node
 *at index index of a dlistint_t linked list.
 *@head: pointer to the head of the dlistint_t
 *@index: index of the node to delete
 *Return: (1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *count = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (count == NULL)
			return (-1);
		count = count->next;
	}

	if (count == *head)
	{
		*head = count->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		count->prev->next = count->next;
		if (count->next != NULL)
			count->next->prev = count->prev;
	}

	free(count);
	return (1);
}
