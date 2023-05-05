#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: num to print in bin.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int z, printed = 0;
	unsigned long int cur;

	for (z = 63; z >= 0; z--)
	{
		cur = n >> z;

		if (cur & 1)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
