#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp;
	int i = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		tmp = ht->array[index];
		if (tmp)
		{
			if (i)
				printf(", ");
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
			i = 1;
		}
		index++;
	}
	printf("}\n");
}
