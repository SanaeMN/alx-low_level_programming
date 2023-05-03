#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index list
 * @head: double pointer header list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if succeeded, -1 if it fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *actual_node, *previous_node;
	unsigned int i = 1;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		actual_node = *head;
		*head = actual_node->next;
		free(actual_node);
		return (1);
	}

	previous_node = *head;
	actual_node = previous_node->next;
	while (actual_node != NULL && i < index)
	{
		previous_node = actual_node;
		actual_node = actual_node->next;
		i++;
	}
	if (actual_node == NULL)
		return (-1);
	previous_node->next = actual_node->next;
	free(actual_node);
	return (1);
}
