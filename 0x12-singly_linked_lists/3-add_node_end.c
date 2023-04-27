#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @head: double Pointer to the list
 * @str: the new string.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (new->next)
		new = new->next;
	new->next = temp;
	return (temp);
}
