#include "main.h"
/**
 * _isalpha - function that checks for alphabets
 *
 * @c: parameter to be checked
 *
 * Return: 1 if c is a letter or lowercase or uppercase
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
