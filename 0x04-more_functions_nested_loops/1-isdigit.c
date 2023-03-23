#include "main.h"
/**
 * _isdigit - check a digit character
 *
 * @c: charecter to be checked
 *
 * Return: 1 for digit
 * and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
