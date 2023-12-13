#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in a sorted list.
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if value
 * is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, j, k = sqrt(size);
	listint_t *node = list;
	listint_t *tmp = list;

	if (!list)
		return (NULL);
	while (node->next && node->n < value)
	{
		i += k;
		tmp = node;
		for (j = 0; j < k && node->next; j++)
			node = node->next;
		printf("Value checked at index [%lu] = [%d]\n", i, node->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n"
	, (i == 0) ? 0 : i - k, node->index);
	while (tmp->next && tmp->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
		tmp = tmp->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
	return ((tmp->n == value) ? tmp : NULL);
}
