#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - allocates memory
* @b: unsigned int
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == 0)
	exit(98);

	return (n);
}
