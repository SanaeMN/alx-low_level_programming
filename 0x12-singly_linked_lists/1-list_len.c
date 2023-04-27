#include "lists.h"
/**
 * list_len - function that returns the number of elements.
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
