#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array of integers.
 * @array: A pointer to put in the array
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, middle = 0, left = 0, right = size - 1;

	if (!array || size <= 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
