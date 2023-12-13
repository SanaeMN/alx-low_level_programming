#include "search_algos.h"



/**
 * advanced_binary_recursive - function that searches for a
 * value in a sorted array.
 * @array: pointer to the array to search in
 * @left: left index
 * @right: right index
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t k;

	if (left > right)
		return (-1);
	printf("Searching in array: ");
	for (k = left; k < right; k++)
		printf("%d, ", array[k]);
	printf("%d\n", array[k]);
	k = left + (right - left) / 2;
	if (array[k] == value)
	{
		if (array[k - 1] == value)
			return (advanced_binary_recursive(array, left, k, value));
		return (k);
	}
	if (array[k] < value)
		return (advanced_binary_recursive(array, k + 1, right, value));
	return (advanced_binary_recursive(array, left, k, value));
}

/**
 * advanced_binary - function that searches for a value in a sorted array.
 * @array: pointer to the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
