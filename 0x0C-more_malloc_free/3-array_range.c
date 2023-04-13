#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *array_range - function that creates an array of integers.
* @min: array value.
* @max: array value.
* Return: the pointer.
*/
int *array_range(int min, int max)
{
	int len, a;
	int *ptr;

	if (min > max)
	return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
	return (NULL);
	for (a = 0; a < len; a++)
	ptr[a] = min++;
	return (ptr);
}
