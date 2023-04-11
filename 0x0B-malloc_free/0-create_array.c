#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *create_array - function that creates an array of chars
* @size: array's size
* @c: char to initialize
* Return: pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (NULL);
	while (i < size)
	{
		n[i] = c;
		i++;
	}
	return (n);
}
