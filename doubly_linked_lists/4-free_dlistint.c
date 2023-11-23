#include "lists.h"
/**
 *free_dlistint - function that frees a dlistint_t list.
 *@head: head of the dlistin_t
 *
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *count = head;
	dlistint_t *next;

	while (count != NULL)
	{
		next = count->next;
		free(count);
		count = next;
	}
}
