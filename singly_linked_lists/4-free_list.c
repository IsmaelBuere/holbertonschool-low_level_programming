#include "lists.h"
/**
 *free_list - free a list
 *@head: head of the linked list
 *
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *count;

	while ((count = head) != NULL)
	{
		head = head->next;
		free(count->str);
		free(count);
	}
}
