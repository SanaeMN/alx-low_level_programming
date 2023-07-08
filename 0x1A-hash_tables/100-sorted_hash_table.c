#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: unsigned long int
 * Return: NULL or sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_get - check the code
 * @ht: A pointer to the hash table.
 * @key: is the key
 * Return: NULL or value of the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[idx];
	if (temp == NULL)
		return (NULL);
	while (temp->next && strcmp(key, temp->key) != 0)
		temp = temp->next;
	if (strcmp(key, temp->key) == 0)
		return (temp->value);
	return (NULL);
}
/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(ht->array);
	free(ht);
}
/**
 * insert_new_node - Insert an element to a sorted hash table.
 * @ht: A pointer to the hash table.
 * @new: A pointer to the new hash node
 * Return: nothing
 */
void insert_new_node(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		new->sprev = NULL, new->snext = NULL;
		ht->shead = new, ht->stail = new;
	}
	else if (strcmp(ht->shead->key, new->key) > 0)
	{
		new->sprev = NULL, new->snext = ht->shead;
		ht->shead->sprev = new, ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, new->key) < 0)
			temp = temp->snext;
		new->sprev = temp, new->snext = temp->snext;
		if (!temp->snext)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}
}
/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the hash table.
 * @key: is the key
 * @value: The value of key.
 * Return: 0 or 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	for (new = ht->array[idx]; new; new = new->next)
	{
		if (!strcmp(key, new->key))
		{
			free(new->value), new->value = strdup(value);
			return (1);
		}
	}
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key), free(new);
		return (0);
	}
	new->next = ht->array[idx], ht->array[idx] = new;
	insert_new_node(ht, new);
	return (1);
}
/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (ht->shead != temp)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	temp = ht->stail;
	while (temp)
	{
		if (ht->stail != temp)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
	}
	printf("}\n");
}
