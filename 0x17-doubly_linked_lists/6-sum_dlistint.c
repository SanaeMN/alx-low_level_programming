#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n).
 * @head: header list
 * Return: 0(if the list is empty)
 */
int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
