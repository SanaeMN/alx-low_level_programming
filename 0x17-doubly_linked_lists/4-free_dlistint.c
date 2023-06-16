#include "lists.h"

/**
 * free_dlistint - function that frees a list.
 * @head: header list
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
