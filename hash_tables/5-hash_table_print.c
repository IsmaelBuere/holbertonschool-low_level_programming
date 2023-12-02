#include "hash_tables.h"
/**
  * hash_table_print - Prints a hash table
  * @ht: The hash table to prints
  *
  * Return: (void)
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *c_n;
	char count = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		c_n = ht->array[i];

		while (c_n != NULL)
		{
			if (count == 1)
				printf(", ");
			printf("'%s': '%s'", c_n->key, c_n->value);
			count = 1;
			c_n = c_n->next;
		}
	}
	printf("}\n");
}
