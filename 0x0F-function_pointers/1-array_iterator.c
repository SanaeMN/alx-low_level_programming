#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a func as a param on each element of an array
 * @array: array
 * @size: array size
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ed = array + size - 1;

	if (array && size && action)
		while (array <= ed)
			action(*array++);
}
