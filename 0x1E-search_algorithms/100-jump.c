#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array.
 * @array: pointer to the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j, k = sqrt(size);

	if (!array || size == 0)
		return (-1);
	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += k;
	}
	j = i - k;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	while (j < size)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
