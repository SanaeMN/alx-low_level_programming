#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *h, *tmp;
	unsigned long int a = 0;

	for (; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			h = ht->array[a];
			while (h != NULL)
			{
				tmp = h->next;
				free(h->key);
				free(h->value);
				free(h);
				h = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
