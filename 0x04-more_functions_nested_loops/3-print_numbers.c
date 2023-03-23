#include "main.h"
/**
 * print_numbers - prin the numbers since 0 up to 9
 * Return: the numbers since 0 up to 9
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
