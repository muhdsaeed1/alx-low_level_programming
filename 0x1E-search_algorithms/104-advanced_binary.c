#include "search_algos.h"

/**
 * binary_search_recursion - recursively searches for a value in an integer
 * array using binary search
 * @array: pointer to the first element of the array to search
 * @value: value to search for
 * @low: starting index in array
 * @high: ending index in array
 *
 * Return: index of value, or -1 if not found or array is NULL
 */
int binary_search_recursion(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%d%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value, mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value, low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm. Returns the first appearance of the value.
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of value, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}

