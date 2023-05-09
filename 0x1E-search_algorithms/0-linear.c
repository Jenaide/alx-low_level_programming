#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of integers.
 * @array: A pointer to put in the array
 * @size: The size of array.
 * @value: The value to search
 * Return: The index of the value into the array.
 */
int linear_search(int *array, size_t size, int value);
{
	size_t x = 0;

	if (!array || size <= 0)
		return (-1);
	for (x = 0; i < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
