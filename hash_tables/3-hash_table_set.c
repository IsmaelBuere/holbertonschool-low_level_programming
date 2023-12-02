#include "hash_tables.h"

/**
  * hash_table_set - Adds an element to the hash table
  * @ht: The hash table to add or update the key/value to
  * @key: The key of a value
  * @value: The value associated with the key
  *
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *c_n = NULL, *n_node = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	i = key_index((unsigned char *) key, ht->size);
	c_n = ht->array[i];

	if (c_n && strcmp(key, c_n->key) == 0)
	{
		free(c_n->value);
		c_n->value = strdup(value);
		return (1);
	}

	n_node = malloc(sizeof(hash_node_t));

	if (n_node == NULL)
		return (0);

	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = ht->array[i];
	ht->array[i] = n_node;
	return (1);
}
