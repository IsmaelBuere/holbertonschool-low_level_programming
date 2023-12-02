#include "hash_tables.h"
/**
  * key_index - a function that gives you the index of a key.
  * @key: The given key
  * @size: The size of the hash table
  *
  * Return: index key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
