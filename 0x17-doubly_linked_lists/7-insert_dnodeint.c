#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position.
 * @head: header list
 * @idx: index of the list.
 * @n: value to add.
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *head;
	unsigned int i = 0;

	if (idx == 0)
		new_node = add_dnodeint(head, n);
	else
	{
		for (i = 0; idx > i && temp; i++)
			temp = temp->next;
		if (temp == NULL && i == idx)
			return (add_dnodeint_end(head, n));
		else if (temp == NULL)
			return (NULL);
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->prev = temp->prev;
		new_node->next = temp;
		temp->prev->next = new_node;
		temp->prev = new_node;
	}
	return (new_node);
}
