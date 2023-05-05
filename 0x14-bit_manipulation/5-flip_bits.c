#include "main.h"

/**
 * flip_bits - returns num's bits to flip to get from one num to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to convert nums.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int curt;
	unsigned long int excl = n ^ m;
	int s, count = 0;

	for (s = 63; s >= 0; s--)
	{
		curt = excl >> s;
		if (curt & 1)
			count++;
	}

	return (count);
}
