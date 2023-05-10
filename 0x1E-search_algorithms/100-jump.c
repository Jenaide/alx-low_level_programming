#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array of integers.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x = 0, y = 0, step = sqrt(size);

	if (array == NULL || size == 0)
		return -1;

	while (y < size && array[y] < value)
	{
		x = y;
		y += step;
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", x, y);

	while (x < y)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}

	return -1;
}
