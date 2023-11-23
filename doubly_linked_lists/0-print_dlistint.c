#include "lists.h"
/**
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}
