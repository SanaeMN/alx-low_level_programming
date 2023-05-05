#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: num to index
 * @index: index's bit
 *
 * Return: value's bit at index index or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
