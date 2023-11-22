#include "lists.h"
/**
 *print_list - prints elements of a list
 *@h: single linked list to print
 *Return: (n)
 */
size_t print_list(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
	{
		printf("[%d] %S\n", h->len h->str);
		h = h->next;
	}
	return (n);
}
