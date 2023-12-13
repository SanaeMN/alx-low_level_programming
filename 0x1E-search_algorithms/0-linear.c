#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array.
 * @array: pointer to the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
