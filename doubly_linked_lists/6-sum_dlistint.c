#include "lists.h"
/**
 *sum_dlistint - function that returns the sum of all
 *the data (n) of a dlistint_t linked list.
 *@head: head of the dlistint_t
 *Return: (s)
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
