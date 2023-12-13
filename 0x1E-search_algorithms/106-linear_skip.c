#include "search_algos.h"
/**
 * linear_skip - function that searches for a value in a sorted skip list.
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer on the first node where value is located, or NULL if value
 * is not present in list or if head is NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *tmp;

	if (list == NULL)
		return (NULL);
	while (node->express)
	{
		tmp = node->express;
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
		if (tmp->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					node->index, tmp->index);
			break;
		}
		node = tmp;
	}
	if (!tmp->express && tmp->n < value)
	{
		node = tmp;
		while (tmp->next)
			tmp = tmp->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
				node->index, tmp->index);
	}
	while (node)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}
