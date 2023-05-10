#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array of integers
 * using the interpolation search algo.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a = 0, b = size - 1, c = 0;

	if (array == NULL || size == 0)
		return -1;

	while (array[a] != array[b])
	{
		c = a + (value - array[a]) * (b - a) / (array[b] - array[a]);
		if (c > size)
		{
			printf("Value checked array[%lu] is out of range\n",
					c);
			return -1;
		}
		printf("Value checked array[%lu] = [%d]\n", c, array[c]);

		if (array[c] < value)
			a = c + 1;
		else if (value < array[c])
			b = c - 1;
		else
			return c;
	}

	if (value == array[a])
		return a;

	return -1;
}
