#include "hash_tables.h"
/**
  * hash_table_delete - Deletes a hash table
  * @ht: The hash table to frees
  *
  * Return: (void)
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *node = ht;
	hash_node_t *n_node, *count;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n_node = ht->array[i];
			while (n_node != NULL)
			{
				count = n_node->next;
				free(n_node->key);
				free(n_node->value);
				free(n_node);
				n_node = count;
			}
		}
	}
	free(node->array);
	free(node);
}
