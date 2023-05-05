#include "main.h"

/**
 * clear_bit - sets value's bit to 0 at a given index
 * @n: the number that needs to index.
 * @index: index's bit to clear.
 *
 * Return: 1 if successful, -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (~(1ul << index) & *n);
	return (1);
}
