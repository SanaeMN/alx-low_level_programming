#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 1 or 0.
 */

int get_endianness(void)
{
	unsigned long int y = 1;

	return (*(char *)&y);
}
