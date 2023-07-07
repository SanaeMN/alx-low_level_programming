#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *Tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	Tmp = ht->array[index];
	if (!Tmp)
		return (NULL);
	while (Tmp->next && strcmp(key, Tmp->key) != 0)
		Tmp = Tmp->next;
	if (strcmp(key, Tmp->key) == 0)
		return (Tmp->value);
	return (NULL);
}
