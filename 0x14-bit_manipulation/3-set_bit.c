#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: numbers's index
 * @index: index's bit to set to 1
 *
 * Return: 1 if success and -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
