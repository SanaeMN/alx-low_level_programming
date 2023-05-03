#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: double pointer header list.
 * @index: index of the node, starting at 0.
 *
 * Return: pointer to the list node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	return ((i == index && head) ? head : NULL);
}
