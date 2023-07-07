#include "hash_tables.h"

/**
 * hash_table_create - check the code
 * @size: the size of the array
 * Return: pointer of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int a;

	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (!ht->array)
		return (NULL);
	for (a = 0; a < size; a++)
		ht->array[a] = NULL;
	return (ht);
}
