#include "lists.h"

/**
 * *add_node - function that adds a new node at the beginning of a list_t list
 * @head: double Pointer to the list
 * @str: the new string.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
	len++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}
