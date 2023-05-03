#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: double pointer header list.
 *
 * Return: the data list head content
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp = *head;

	if (temp == NULL)
		return (data);

	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
