#include "lists.h"
/**
 *list_len - returns the number of elements
 *@h: the linked list
 *Return: (count)
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
