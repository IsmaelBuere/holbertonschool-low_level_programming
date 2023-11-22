#include "lists.h"
/**
 *
 *
 *
 *
 */
void free_list(list_t *head)
{
	list_t *count;

	while ((count = head) != NULL)
	{
		head = head->next
		free(count->str);
		free(count);
	}
}
