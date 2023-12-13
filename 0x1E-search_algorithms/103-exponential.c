#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted array.
 * @array: pointer to the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (i < size && array[i] < value)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]), i *= 2;
	high = (i >= size) ? size - 1 : i;
	low = i / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		i = low + (high - low) / 2;
		printf("Searching in array: ");
		for (low = low; low <= high; low++)
			printf("%d%s", array[low], ((low != high)) ? ", " : "\n");
		if (array[i] == value)
			return (i);
		if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}
	return (-1);
}
