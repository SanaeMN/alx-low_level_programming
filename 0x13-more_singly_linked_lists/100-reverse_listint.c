#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer header list
 * Return: none
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next;
	}

	*head = previous_node;
	return (*head);
}
