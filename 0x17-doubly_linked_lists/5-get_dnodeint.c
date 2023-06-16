#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: header list
 * @index: index of node
 * Return: list pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_dnodeint_at_index(head->next, index - 1));
}
