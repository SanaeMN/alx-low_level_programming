#include "main.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: number given.
* @r: square root.
* Return: the square.
*/
int square(int n, int r);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
* square - find square root
* @n: number given.
* @r: square root.
* Return: the square.
*/
int square(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r < n)
		return (square(n, r + 1));
	else
		return (-1);
}
