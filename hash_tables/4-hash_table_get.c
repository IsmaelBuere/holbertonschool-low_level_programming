#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: value associated with the element else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *) key, ht->size);
	if (i >= ht->size)
		return (NULL);

	n = ht->array[i];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((n == NULL) ? NULL : n->value);
}
