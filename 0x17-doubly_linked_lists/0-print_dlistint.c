#include "lists.h"
/**
 * print_dlistint -  function that prints all the elements
 * @h: header list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
