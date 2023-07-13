#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Implement Exponential Search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = bound < size ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search2(array, low, high, value));
}

/**
 * binary_search2 - Perform Binary Search on a sorted subarray
 * @array: Pointer to the first element of the array
 * @low: Lower bound of the subarray
 * @high: Upper bound of the subarray
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value, or -1 if not found
 */
int binary_search2(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_array(array, low, high);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Print the array being searched
 * @array: Pointer to the first element of the array
 * @low: Lower bound of the subarray
 * @high: Upper bound of the subarray
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		printf("%d", array[low]);
		if (low != high)
			printf(", ");
	}
	printf("\n");
}

