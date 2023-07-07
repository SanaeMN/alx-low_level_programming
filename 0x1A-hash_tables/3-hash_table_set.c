#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 * Return: success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *New;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	New = ht->array[index];
	while (New)
	{
		if (!strcmp(key, New->key))
		{
			free(New->value);
			New->value = strdup(value);
			return (1);
		}
		New = New->next;
	}
	New = malloc(sizeof(hash_node_t *));
	if (!New)
		return (0);
	New->key = strdup(key);
	if (!New->key)
	{
		free(New);
		return (0);
	}
	New->value = strdup(value);
	if (!New->value)
	{
		free(New->key);
		free(New);
		return (0);
	}
	New->next = ht->array[index];
	ht->array[index] = New;
	return (1);
}
