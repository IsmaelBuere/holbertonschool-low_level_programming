#include "lists.h"
/**
 *print_list - prints elements of a list
 *@h: single linked list to print
 *Return: (count)
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
